// Copyright (c) 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by the QUICHE Copybara export script.

#ifdef QUIC_FLAG

QUIC_FLAG(FLAGS_quic_restart_flag_dont_fetch_quic_private_keys_from_leto, false)

QUIC_FLAG(FLAGS_quic_restart_flag_quic_offload_pacing_to_usps2, false)
// A testonly reloadable flag that will always default to false.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_testonly_default_false, false)
// A testonly reloadable flag that will always default to true.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_testonly_default_true, true)
// A testonly restart flag that will always default to false.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_testonly_default_false, false)
// A testonly restart flag that will always default to true.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_testonly_default_true, true)
// If true, GFE will consider SNI values which do not contain dots (instead of throwing them away - see b/176998377).
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_and_tls_allow_sni_without_dots, true)
// If true, QUIC BBRv2\'s PROBE_BW mode will not reduce cwnd below BDP+ack_height.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_avoid_too_low_probe_bw_cwnd, false)
// If true, QUIC will default enable MTU discovery at server, with a target of 1450 bytes.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_mtu_discovery_at_server, false)
// If true, QuicBatchWriterBase will mark the writer as blocked when the write status is WRITE_STATUS_BLOCKED_DATA_BUFFERED.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_batch_writer_fix_write_blocked, true)
// If true, QuicGsoBatchWriter will support release time if it is available and the process has the permission to do so.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_support_release_time_for_gso, false)
// If true, TlsHandshaker::AdvanceHandshake will retry SSL_do_handshake when entered early data.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_tls_retry_handshake_on_early_data, true)
// If true, TlsServerHandshaker will install a packet flusher when async operation completes.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_add_packet_flusher_on_async_op_done, true)
// If true, TlsServerHandshaker will use handshake hints(if present) to speed up handshakes.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_tls_server_use_handshake_hints, true)
// If true, abort async QPACK header decompression in QuicSpdyStream::Reset() and in QuicSpdyStream::OnStreamReset().
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_abort_qpack_on_stream_reset, true)
// If true, ack frequency frame can be sent from server to client.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_can_send_ack_frequency, true)
// If true, allow client to enable BBRv2 on server via connection option \'B2ON\'.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_allow_client_enabled_bbr_v2, false)
// If true, close read side but not write side in QuicSpdyStream::OnStreamReset().
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_fix_on_stream_reset, true)
// If true, default on PTO which unifies TLP + RTO loss recovery.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_on_pto, false)
// If true, default-enable 5RTO blachole detection.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_enable_5rto_blackhole_detection2, true)
// If true, determine stateless reset packet length based on the received packet length.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_fix_stateless_reset, false)
// If true, disable QUIC version Q043.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q043, false)
// If true, disable QUIC version Q046.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q046, false)
// If true, disable QUIC version Q050.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q050, false)
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
// If true, do not send control frames before encryption is established.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_encrypted_control_frames, false)
// If true, do not send stream data when PTO fires.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_donot_pto_half_rtt_data, true)
// If true, do not write stream data and control frames in the middle of packet processing. 
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_donot_write_mid_packet_processing, true)
// If true, drop unsent PATH_RESPONSEs and rely on peer\'s retry.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_drop_unsent_path_response, true)
// If true, enable QUIC version h3 (RFCv1).
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_version_rfcv1, false)
// If true, enable server retransmittable on wire PING.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_server_on_wire_ping, true)
// If true, include stream information in idle timeout connection close detail.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_add_stream_info_to_idle_close_detail, true)
// If true, increase the size of stream sequencer buffer block container on demand.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_allocate_stream_sequencer_buffer_blocks_on_demand, false)
// If true, pass the received PATH_RESPONSE payload to path validator to move forward the path validation.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_pass_path_response_to_validator, false)
// If true, quic connection sends/recieives NewConnectionId & RetireConnectionId frames.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_connection_support_multiple_cids_v4, true)
// If true, quic dispatcher discards packets with invalid server connection ID.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_discard_packets_with_invalid_cid, false)
// If true, quic dispatcher supports one connection to use multiple connection IDs. 
QUIC_FLAG(FLAGS_quic_restart_flag_quic_dispatcher_support_multiple_cid_per_connection_v2, true)
// If true, require handshake confirmation for QUIC connections, functionally disabling 0-rtt handshakes.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_require_handshake_confirmation, false)
// If true, send PATH_RESPONSE upon receiving PATH_CHALLENGE regardless of perspective. --gfe2_reloadable_flag_quic_start_peer_migration_earlier has to be true before turn on this flag.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_send_path_response2, true)
// If true, set burst token to 2 in cwnd bootstrapping experiment.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_conservative_bursts, false)
// If true, signal error in HttpDecoder upon receiving a PUSH_PROMISE or CANCEL_PUSH frame.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_error_on_http3_push, true)
// If true, stop resetting ideal_next_packet_send_time_ in pacing sender.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_donot_reset_ideal_next_packet_send_time, false)
// If true, time_wait_list can support multiple connection IDs.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_time_wait_list_support_multiple_cid_v2, true)
// If true, treat old (pre-draft02) PRIORITY_UPDATE frame as unknown frame.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_ignore_old_priority_update_frame, true)
// If true, upon receiving path challenge, send path response and reverse path challenge in the same function.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_group_path_response_and_challenge_sending_closer, false)
// If true, use BBRv2 as the default congestion controller. Takes precedence over --quic_default_to_bbr.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_to_bbr_v2, false)
// If true, use ScopedEncryptionLevelContext when sending data.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_use_encryption_level_context, true)
// If true, use WriteOrBufferDataAtLevel to send crypto data. Existing WriteOrBufferData is used to send application data.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_use_write_or_buffer_data_at_level, false)
// If true, use new connection ID in connection migration.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_connection_migration_use_new_cid_v2, false)
// If true, use the connection ID and stateless reset token on default PathState.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_use_connection_id_on_default_path_v2, false)
// If true, uses conservative cwnd gain and pacing gain when cwnd gets bootstrapped.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_conservative_cwnd_and_pacing_gains, false)
// If true, validate that peer owns the new address once the server detects peer migration or is probed from that address, and also apply anti-amplification limit while sending to that address.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_server_reverse_validate_new_path3, false)
// If ture, replace the incoming_connection_ids check with original_destination_connection_id check.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_deprecate_incoming_connection_ids, true)
// When the STMP connection option is sent by the client, timestamps in the QUIC ACK frame are sent and processed.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_send_timestamps, false)
// When true, QuicSpdySession supports draft-ietf-masque-h3-datagram.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_h3_datagram, false)
// When true, defaults to BBR congestion control instead of Cubic.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_to_bbr, false)
// When true, makes the QUIC BBRv2 bw_lo modes more similar to standard BBRv2.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_fix_bw_lo_mode, true)
// When true, set the initial congestion control window from connection options in QuicSentPacketManager rather than TcpCubicSenderBytes.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_unified_iw_options, false)

#endif

