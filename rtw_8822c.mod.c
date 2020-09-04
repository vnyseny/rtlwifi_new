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
	{ 0xe789c058, "rtw_set_channel_mac" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe3498d38, "rtw_phy_write_rf_reg_mix" },
	{ 0xf403d8a, "rtw_parse_tbl_bb_pg" },
	{ 0x2829be37, "rtw_rx_fill_rx_status" },
	{ 0xe27e0e4b, "rtw_phy_load_tables" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfb05b923, "rtw_bf_phy_init" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2fddff08, "rtw_parse_tbl_txpwr_lmt" },
	{ 0x519c8ba9, "rtw_rate_size" },
	{ 0x637c5d6d, "rtw_bf_set_gid_table" },
	{ 0x440b7589, "rtw_phy_rf_power_2_rssi" },
	{ 0xb28eda4, "rtw_phy_pwrtrack_avg" },
	{ 0x5073a32, "rtw_phy_pwrtrack_need_iqk" },
	{ 0x58210e60, "rtw_rate_section" },
	{ 0xeaf5e717, "rtw_fw_do_iqk" },
	{ 0x606cc88c, "rtw_read8_physical_efuse" },
	{ 0x8a38dc34, "rtw_bf_enable_bfee_su" },
	{ 0xc85d768e, "_dev_warn" },
	{ 0x6073ad3f, "rtw_phy_read_rf" },
	{ 0xa3073c44, "rtw_phy_cfg_agc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd53e0466, "rtw_coex_read_indirect_reg" },
	{ 0xd684a25, "__rtw_dbg" },
	{ 0xd925d36e, "rtw_bf_enable_bfee_mu" },
	{ 0x130ae845, "rtw_bf_remove_bfee_su" },
	{ 0x1b4df8c1, "rtw_bf_remove_bfee_mu" },
	{ 0x316d1bda, "_dev_err" },
	{ 0x5b90376e, "rtw_bf_cfg_csi_rate" },
	{ 0x9d691b2e, "rtw_restore_reg" },
	{ 0x59e59766, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9afcac0c, "rtw_phy_cfg_bb" },
	{ 0x6cc5d6af, "rtw_phy_cfg_rf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7d109753, "rtw_phy_pwrtrack_get_delta" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa15abc48, "check_hw_ready" },
	{ 0x81879295, "rtw_coex_write_indirect_reg" },
	{ 0x8fdc2981, "rtw_phy_cfg_mac" },
	{ 0x814af045, "rtw_phy_pwrtrack_get_pwridx" },
	{ 0xc4e29f5f, "rtw_parse_tbl_phy_cond" },
	{ 0x1c6ff747, "rtw_phy_init" },
	{ 0xe7a7cef1, "rtw_phy_config_swing_table" },
};

MODULE_INFO(depends, "rtw_core");

