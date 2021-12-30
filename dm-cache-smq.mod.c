#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
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
__used
__attribute__((section("__versions"))) = {
	{ 0x6b7d84e3, __VMLINUX_SYMBOL_STR(btracker_promotion_already_present) },
	{ 0x83563757, __VMLINUX_SYMBOL_STR(btracker_issue) },
	{ 0xbf1a2968, __VMLINUX_SYMBOL_STR(btracker_create) },
	{ 0x9bd4f215, __VMLINUX_SYMBOL_STR(dm_cache_policy_register) },
	{ 0x5adc2807, __VMLINUX_SYMBOL_STR(btracker_destroy) },
	{ 0xccfe6409, __VMLINUX_SYMBOL_STR(btracker_nr_demotions_queued) },
	{ 0x9305cc6a, __VMLINUX_SYMBOL_STR(btracker_complete) },
	{ 0xfffccd15, __VMLINUX_SYMBOL_STR(dm_cache_policy_unregister) },
	{ 0x4fcf37e5, __VMLINUX_SYMBOL_STR(btracker_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-cache";


MODULE_INFO(srcversion, "C84CB4C194FEE2DCA9B40C2");
