#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfc5ded98, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc169cc99, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xae34220, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_alloc) },
	{ 0xdb4367ae, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x3098da39, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0xaab5ea4, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf8d04f09, __VMLINUX_SYMBOL_STR(__crc32c_le_shift) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x48be7b82, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0xcea7a5c5, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xe8b506, __VMLINUX_SYMBOL_STR(gro_find_receive_by_type) },
	{ 0x376090bc, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x6ed8ca63, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x25318102, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x2fe4d6c0, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0x8abcd820, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_free) },
	{ 0xb8b6a76c, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x2ed8a135, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x4e9e45c3, __VMLINUX_SYMBOL_STR(ip6_expire_frag_queue) },
	{ 0xbf834b5f, __VMLINUX_SYMBOL_STR(dev_disable_lro) },
	{ 0x159a802d, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x4cec7f45, __VMLINUX_SYMBOL_STR(nf_ct_nat_ext_add) },
	{ 0x76aace2c, __VMLINUX_SYMBOL_STR(ip_local_out) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0x35ca21a2, __VMLINUX_SYMBOL_STR(ip_do_fragment) },
	{ 0xf0cd513e, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xfe26fc7c, __VMLINUX_SYMBOL_STR(nr_node_ids) },
	{ 0x558355d9, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x378b6aac, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x78c8644d, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc3c83b35, __VMLINUX_SYMBOL_STR(udp_add_offload) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x87af317, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x51806b58, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x475e90e2, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4c874bc5, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5e82fc43, __VMLINUX_SYMBOL_STR(skb_zerocopy) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x42b52668, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x17923f, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x75008be1, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x5d8f1f93, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc5dfcef2, __VMLINUX_SYMBOL_STR(__skb_checksum) },
	{ 0x78c4097a, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x8a3f6275, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x8ad41cbc, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xb3d5ed86, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0x32515106, __VMLINUX_SYMBOL_STR(kfree_skb_list) },
	{ 0xeba0596, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x8006432a, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x29325aa3, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x45dec59e, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace16) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xbefb1981, __VMLINUX_SYMBOL_STR(skb_zerocopy_headlen) },
	{ 0x1128c74, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0x719c4e9f, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0x4246cf1c, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xd376d0e8, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xcad5f5f0, __VMLINUX_SYMBOL_STR(skb_vlan_push) },
	{ 0x51109301, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xd145f7c6, __VMLINUX_SYMBOL_STR(nf_nat_icmpv6_reply_translation) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xa2cd96be, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf331aecc, __VMLINUX_SYMBOL_STR(kfree_skb_partial) },
	{ 0xd1354ec8, __VMLINUX_SYMBOL_STR(ip_defrag) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcb270245, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x6d2fc5a6, __VMLINUX_SYMBOL_STR(net_namespace_list) },
	{ 0xb4a6d80a, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xceb992da, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0x7264b96, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xa1a71ae2, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x9dbdbf04, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0xd6681ed2, __VMLINUX_SYMBOL_STR(nf_nat_icmp_reply_translation) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x13782515, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x9c56979b, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0x53a5f161, __VMLINUX_SYMBOL_STR(__skb_warn_lro_forwarding) },
	{ 0x54256c66, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x1adcbef, __VMLINUX_SYMBOL_STR(skb_ensure_writable) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x56a601ec, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0xdc71b6d7, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x4813e033, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xfc36838e, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0xf9f3ad42, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x84af42da, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xefef48bb, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd0184497, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0xb74db1a7, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2a54ddf1, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xbb2263a6, __VMLINUX_SYMBOL_STR(gro_find_complete_by_type) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0xb581cfb3, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x253339e4, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xdf49be8e, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xb12613b7, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xa37e78b6, __VMLINUX_SYMBOL_STR(flex_array_get) },
	{ 0x232213b9, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xa9a166ca, __VMLINUX_SYMBOL_STR(nf_register_net_hook) },
	{ 0x4ea5d10, __VMLINUX_SYMBOL_STR(ksize) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x6f34fabf, __VMLINUX_SYMBOL_STR(nf_unregister_net_hook) },
	{ 0xa44891bf, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x6132f0ff, __VMLINUX_SYMBOL_STR(rtnl_configure_link) },
	{ 0x2f243364, __VMLINUX_SYMBOL_STR(dst_init) },
	{ 0x8410a521, __VMLINUX_SYMBOL_STR(eth_gro_receive) },
	{ 0x3ca332af, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0xffc2ae91, __VMLINUX_SYMBOL_STR(skb_vlan_pop) },
	{ 0x7fc1db51, __VMLINUX_SYMBOL_STR(skb_try_coalesce) },
	{ 0x9019dea3, __VMLINUX_SYMBOL_STR(udp_del_offload) },
	{ 0xfa5c222, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x622bce2e, __VMLINUX_SYMBOL_STR(eth_gro_complete) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0xbd13bab2, __VMLINUX_SYMBOL_STR(__nla_reserve) },
	{ 0x8ba0d6b9, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x246d52de, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0x2509a0ce, __VMLINUX_SYMBOL_STR(nf_ipv6_ops) },
	{ 0x7cd23bc4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xe96dff2b, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xa503ed28, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xb152d87d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x42648f14, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0xa69ff866, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x5ed2ca08, __VMLINUX_SYMBOL_STR(nf_connlabels_get) },
	{ 0x9a8b7525, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x376a4424, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x69ef5cde, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x411c4793, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x6fc82938, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x49dddb40, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x83737ff9, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0x55d779c8, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x8eae033c, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x57d102cb, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x78a0b49e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x61fb248a, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5ecfeec6, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xb41e0ee1, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0xc3f46bc9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x18d97b4c, __VMLINUX_SYMBOL_STR(ip6_frag_init) },
	{ 0xe5cbb7b, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x94c3e943, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xcf7ce241, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0xa85126a8, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xee223a82, __VMLINUX_SYMBOL_STR(netlink_set_err) },
	{ 0x7a4b576, __VMLINUX_SYMBOL_STR(flex_array_free) },
	{ 0x44094ef6, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0xfed301f8, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x8eb0ea36, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xa7fb5763, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xdc7ee103, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x8106b7a9, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x481c849d, __VMLINUX_SYMBOL_STR(nf_connlabels_put) },
	{ 0xafd5ee53, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x13315729, __VMLINUX_SYMBOL_STR(flex_array_alloc) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x1a143275, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x892f6679, __VMLINUX_SYMBOL_STR(nf_ct_get_tuple) },
	{ 0x17208f7c, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4f79dd6e, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x7034d6a8, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x45c51929, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0xc3e757d6, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x6b33906b, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0xb251e12f, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x87c9397f, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xbcefec4, __VMLINUX_SYMBOL_STR(genl_notify) },
	{ 0x9bcd4051, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x64f203a0, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x3a35507f, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x24fdca20, __VMLINUX_SYMBOL_STR(skb_morph) },
	{ 0x22db892e, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x504be518, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x1e8512b, __VMLINUX_SYMBOL_STR(__ip_select_ident) },
	{ 0x783c06c7, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2ac09dd5, __VMLINUX_SYMBOL_STR(__nla_put) },
	{ 0xb96c15e6, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0x7bd6df0a, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x9fd7cda1, __VMLINUX_SYMBOL_STR(flex_array_prealloc) },
	{ 0x9eb5b272, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x5fc2bf94, __VMLINUX_SYMBOL_STR(ip6_frag_match) },
	{ 0x85e1f1, __VMLINUX_SYMBOL_STR(__do_once_done) },
	{ 0x249750e1, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_nat,nf_defrag_ipv6,libcrc32c,nf_nat_ipv6,gre,nf_nat_ipv4";


MODULE_INFO(srcversion, "9706485A084E6646320D443");