#include <linux/module.h>
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7ca88ad8, "module_layout" },
	{ 0xe91ac686, "ieee80211_rx_irqsafe" },
	{ 0x90d8009b, "rtw_fw_c2h_cmd_rx_irqsafe" },
	{ 0xe79e28d, "pci_free_irq_vectors" },
	{ 0xeafacbc4, "rtw_tx_write_data_h2c_get" },
	{ 0x8098185a, "rtw_power_mode_change" },
	{ 0x3e81cefd, "pci_disable_device" },
	{ 0xe3b49b20, "rtw_ops" },
	{ 0xcb7d6ba5, "rtw_core_deinit" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc04140c4, "dma_direct_sync_single_for_cpu" },
	{ 0x76e715df, "ieee80211_unregister_hw" },
	{ 0x2c7f951, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15993023, "pci_release_regions" },
	{ 0x9c7eda7a, "param_ops_bool" },
	{ 0xe98990c5, "dma_free_attrs" },
	{ 0x45ff29aa, "rtw_register_hw" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x22de7dff, "rtw_rx_stats" },
	{ 0x8189a16b, "__netdev_alloc_skb" },
	{ 0x717ea126, "ieee80211_stop_queue" },
	{ 0x8964095c, "pci_set_master" },
	{ 0x70ca08ec, "pci_alloc_irq_vectors_affinity" },
	{ 0xc85d768e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x2f236104, "rtw_tx_write_data_rsvd_page_get" },
	{ 0x97aa1fe9, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf2e2aeb0, "ieee80211_alloc_hw_nm" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd684a25, "__rtw_dbg" },
	{ 0x5ee0e8b0, "rtw_core_init" },
	{ 0x2fcf0ae3, "dma_direct_map_page" },
	{ 0x930e4c18, "dma_alloc_attrs" },
	{ 0xd393e9d8, "skb_push" },
	{ 0x6f6708ad, "__dev_kfree_skb_irq" },
	{ 0x21aba4e8, "rtw_tx_fill_tx_desc" },
	{ 0x4e945133, "skb_pull" },
	{ 0x316d1bda, "_dev_err" },
	{ 0x71f3075a, "rtw_unregister_hw" },
	{ 0x194d5306, "pci_clear_master" },
	{ 0x69cc455, "rtw_chip_info_setup" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x78eaf37c, "skb_queue_tail" },
	{ 0xa961be37, "dma_direct_unmap_page" },
	{ 0xd5bc8c26, "devm_free_irq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb1ecd996, "ieee80211_tx_status_irqsafe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9d541f84, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8a167b04, "ieee80211_wake_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd89dc93c, "pci_request_regions" },
	{ 0xa7fd8976, "dma_direct_sync_single_for_device" },
	{ 0xfdb05521, "ieee80211_free_hw" },
	{ 0x4672bec8, "skb_dequeue" },
	{ 0x9ff0d5f2, "pci_iomap" },
	{ 0xa4036bd8, "consume_skb" },
	{ 0x3cda7365, "skb_put" },
	{ 0x2fee7093, "pci_enable_device" },
	{ 0x6cfdf86a, "devm_request_threaded_irq" },
	{ 0xa51111ba, "dma_ops" },
	{ 0x71959338, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc29434fe, "rtw_tx_report_enqueue" },
};

MODULE_INFO(depends, "mac80211,rtw_core");

