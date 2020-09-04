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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7ca88ad8, "module_layout" },
	{ 0xf5057972, "rtw_pci_probe" },
	{ 0xe24a4f92, "rtw8822b_hw_spec" },
	{ 0x21e2c7f3, "rtw_pci_shutdown" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfd9ce0a0, "pci_unregister_driver" },
	{ 0xb851e2b5, "rtw_pci_remove" },
	{ 0x8a32c8cf, "__pci_register_driver" },
	{ 0x4953c979, "rtw_pm_ops" },
};

MODULE_INFO(depends, "rtw_pci,rtw_8822b");

MODULE_ALIAS("pci:v000010ECd0000B822sv*sd*bc*sc*i*");
