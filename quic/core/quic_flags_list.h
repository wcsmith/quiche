// Copyright (c) 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by the QUICHE Copybara export script.

#ifdef QUIC_FLAG

QUIC_FLAG(FLAGS_quic_restart_flag_quic_offload_pacing_to_usps2, false)
// A testonly reloadable flag that will always default to false.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_testonly_default_false, false)
// A testonly reloadable flag that will always default to true.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_testonly_default_true, true)
// A testonly restart flag that will always default to false.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_testonly_default_false, false)
// A testonly restart flag that will always default to true.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_testonly_default_true, true)
// If true and a QUIC connection is traced, add ssl events to the trace.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_trace_ssl_events, true)
// If true, GFE will explicitly configure its signature algorithm preference.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_tls_set_signature_algorithm_prefs, true)
// If true, QUIC will default enable MTU discovery at server, with a target of 1450 bytes.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_mtu_discovery_at_server, false)
// If true, QuicAlarms that belong to a single QuicConnection will fire under the corresponding QuicConnectionContext.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_restore_connection_context_in_alarms, true)
// If true, QuicGsoBatchWriter will support release time if it is available and the process has the permission to do so.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_support_release_time_for_gso, false)
// If true, abort async QPACK header decompression in QuicSpdyStream::Reset() and in QuicSpdyStream::OnStreamReset().
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_abort_qpack_on_stream_reset, true)
// If true, ack frequency frame can be sent from server to client.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_can_send_ack_frequency, true)
// If true, add missing MaybeUpdateAckTimeout for ack-eliciting frames.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_add_missing_update_ack_timeout, true)
// If true, allow client to enable BBRv2 on server via connection option \'B2ON\'.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_allow_client_enabled_bbr_v2, false)
// If true, avoid calling reloadable flags in QuicVersionManager constructor by lazily initializing internal state.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_lazy_quic_version_manager, true)
// If true, clear undecryptable packets on handshake complete.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_clear_undecryptable_packets_on_handshake_complete, true)
// If true, close read side but not write side in QuicSpdyStream::OnStreamReset().
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_fix_on_stream_reset, true)
// If true, default on PTO which unifies TLP + RTO loss recovery.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_on_pto, false)
// If true, default-enable 5RTO blachole detection.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_enable_5rto_blackhole_detection2, true)
// If true, disable QUIC version Q043.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q043, false)
// If true, disable QUIC version Q046.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q046, false)
// If true, disable QUIC version Q050.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q050, false)
// If true, disable QUIC version h3 (RFCv1).
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_rfcv1, false)
// If true, disable QUIC version h3-29.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_draft_29, false)
// If true, disable QUIC version h3-T051.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_t051, false)
// If true, disable blackhole detection on server side.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_server_blackhole_detection, false)
// If true, discard INITIAL packet if the key has been dropped.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_discard_initial_packet_with_key_dropped, true)
// If true, do not bundle 2nd ACK with connection close if there is an ACK queued.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_single_ack_in_packet2, false)
// If true, do not count bytes sent/received on the alternative path into the bytes sent/received on the default path.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_count_bytes_on_alternative_path_seperately, true)
// If true, do not re-arm PTO while sending application data during handshake.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_donot_rearm_pto_on_application_data_during_handshake, true)
// If true, drop unsent PATH_RESPONSEs and rely on peer\'s retry.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_drop_unsent_path_response, true)
// If true, enable server retransmittable on wire PING.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_server_on_wire_ping, true)
// If true, flush any pending frame before default path is about to be updated.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_flush_pending_frame_before_updating_default_path, true)
// If true, ignore peer_max_ack_delay during handshake.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_ignore_peer_max_ack_delay_during_handshake, true)
// If true, include stream information in idle timeout connection close detail.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_add_stream_info_to_idle_close_detail, true)
// If true, pass the received PATH_RESPONSE payload to path validator to move forward the path validation.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_pass_path_response_to_validator, true)
// If true, quic dispatcher supports one connection to use multiple connection IDs. 
QUIC_FLAG(FLAGS_quic_restart_flag_quic_dispatcher_support_multiple_cid_per_connection_v2, true)
// If true, record addresses that server has sent reset to recently, and do not send reset if the address lives in the set.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_use_recent_reset_addresses, true)
// If true, refactor how QUIC TLS server disables resumption. No behavior change.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_tls_disable_resumption_refactor, true)
// If true, require handshake confirmation for QUIC connections, functionally disabling 0-rtt handshakes.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_require_handshake_confirmation, false)
// If true, reset per packet state before processing undecryptable packets.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_reset_per_packet_state_for_undecryptable_packets, true)
// If true, respect FLAGS_quic_time_wait_list_max_pending_packets as the upper bound of queued packets in time wait list.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_add_upperbound_for_queued_packets, true)
// If true, restore connection context in various callbacks in TlsServerHandshaker.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_tls_restore_connection_context_in_callbacks, true)
// If true, send PATH_RESPONSE upon receiving PATH_CHALLENGE regardless of perspective. --gfe2_reloadable_flag_quic_start_peer_migration_earlier has to be true before turn on this flag.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_send_path_response2, true)
// If true, set burst token to 2 in cwnd bootstrapping experiment.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_conservative_bursts, false)
// If true, stop resetting ideal_next_packet_send_time_ in pacing sender.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_donot_reset_ideal_next_packet_send_time, false)
// If true, suppress crypto data write in mid of packet processing.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_suppress_write_mid_packet_processing, true)
// If true, time_wait_list can support multiple connection IDs.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_time_wait_list_support_multiple_cid_v2, true)
// If true, use BBRv2 as the default congestion controller. Takes precedence over --quic_default_to_bbr.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_to_bbr_v2, false)
// If true, use new connection ID in connection migration.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_connection_migration_use_new_cid_v2, true)
// If true, uses conservative cwnd gain and pacing gain when cwnd gets bootstrapped.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_conservative_cwnd_and_pacing_gains, false)
// If true, validate that peer owns the new address once the server detects peer migration or is probed from that address, and also apply anti-amplification limit while sending to that address.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_server_reverse_validate_new_path3, true)
// When the STMP connection option is sent by the client, timestamps in the QUIC ACK frame are sent and processed.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_send_timestamps, false)
// When true, QuicDispatcher will silently drop QUIC packets that have invalid flags.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_drop_invalid_flags, true)
// When true, defaults to BBR congestion control instead of Cubic.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_to_bbr, false)
// When true, prevents QUIC\'s PacingSender from generating bursts when the congestion controller is CWND limited and not pacing limited.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_fix_pacing_sender_bursts, false)
// When true, randomizes the order of sent transport parameters in QUIC+TLS.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_randomize_transport_parameter_order, true)
// When true, set the initial congestion control window from connection options in QuicSentPacketManager rather than TcpCubicSenderBytes.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_unified_iw_options, false)

#endif

