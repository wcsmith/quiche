#ifndef QUICHE_HTTP2_ADAPTER_CALLBACK_VISITOR_H_
#define QUICHE_HTTP2_ADAPTER_CALLBACK_VISITOR_H_

#include <memory>
#include <vector>

#include "absl/container/flat_hash_map.h"
#include "http2/adapter/http2_visitor_interface.h"
#include "http2/adapter/nghttp2_util.h"
#include "third_party/nghttp2/src/lib/includes/nghttp2/nghttp2.h"

namespace http2 {
namespace adapter {

// This visitor implementation accepts a set of nghttp2 callbacks and a "user
// data" pointer, and invokes the callbacks according to HTTP/2 events received.
class CallbackVisitor : public Http2VisitorInterface {
 public:
  explicit CallbackVisitor(Perspective perspective,
                           const nghttp2_session_callbacks& callbacks,
                           void* user_data);

  ssize_t OnReadyToSend(absl::string_view serialized) override;
  void OnConnectionError() override;
  void OnFrameHeader(Http2StreamId stream_id,
                     size_t length,
                     uint8_t type,
                     uint8_t flags) override;
  void OnSettingsStart() override;
  void OnSetting(Http2Setting setting) override;
  void OnSettingsEnd() override;
  void OnSettingsAck() override;
  void OnBeginHeadersForStream(Http2StreamId stream_id) override;
  bool OnHeaderForStream(Http2StreamId stream_id, absl::string_view name,
                         absl::string_view value) override;
  void OnEndHeadersForStream(Http2StreamId stream_id) override;
  void OnBeginDataForStream(Http2StreamId stream_id,
                            size_t payload_length) override;
  void OnDataForStream(Http2StreamId stream_id,
                       absl::string_view data) override;
  void OnEndStream(Http2StreamId stream_id) override;
  void OnRstStream(Http2StreamId stream_id, Http2ErrorCode error_code) override;
  void OnCloseStream(Http2StreamId stream_id,
                     Http2ErrorCode error_code) override;
  void OnPriorityForStream(Http2StreamId stream_id,
                           Http2StreamId parent_stream_id,
                           int weight,
                           bool exclusive) override;
  void OnPing(Http2PingId ping_id, bool is_ack) override;
  void OnPushPromiseForStream(Http2StreamId stream_id,
                              Http2StreamId promised_stream_id) override;
  void OnGoAway(Http2StreamId last_accepted_stream_id,
                Http2ErrorCode error_code,
                absl::string_view opaque_data) override;
  void OnWindowUpdate(Http2StreamId stream_id, int window_increment) override;
  int OnBeforeFrameSent(uint8_t frame_type, Http2StreamId stream_id,
                        size_t length, uint8_t flags) override;
  int OnFrameSent(uint8_t frame_type, Http2StreamId stream_id, size_t length,
                  uint8_t flags, uint32_t error_code) override;
  void OnReadyToSendDataForStream(Http2StreamId stream_id,
                                  char* destination_buffer,
                                  size_t length,
                                  ssize_t* written,
                                  bool* end_stream) override;
  void OnReadyToSendMetadataForStream(Http2StreamId stream_id,
                                      char* buffer,
                                      size_t length,
                                      ssize_t* written) override;
  void OnBeginMetadataForStream(Http2StreamId stream_id,
                                size_t payload_length) override;
  void OnMetadataForStream(Http2StreamId stream_id,
                           absl::string_view metadata) override;
  void OnMetadataEndForStream(Http2StreamId stream_id) override;
  void OnErrorDebug(absl::string_view message) override;

 private:
  struct StreamInfo {
    bool before_sent_headers = false;
    bool sent_headers = false;
    bool received_headers = false;
  };

  using StreamInfoMap =
      absl::flat_hash_map<Http2StreamId, std::unique_ptr<StreamInfo>>;

  void PopulateFrame(nghttp2_frame& frame, uint8_t frame_type,
                     Http2StreamId stream_id, size_t length, uint8_t flags,
                     uint32_t error_code, bool sent_headers);
  // Creates the StreamInfoMap entry if it doesn't exist.
  StreamInfoMap::iterator GetStreamInfo(Http2StreamId stream_id);

  Perspective perspective_;
  nghttp2_session_callbacks_unique_ptr callbacks_;
  void* user_data_;

  nghttp2_frame current_frame_;
  std::vector<nghttp2_settings_entry> settings_;
  size_t remaining_data_ = 0;

  StreamInfoMap stream_map_;
};

}  // namespace adapter
}  // namespace http2

#endif  // QUICHE_HTTP2_ADAPTER_CALLBACK_VISITOR_H_
