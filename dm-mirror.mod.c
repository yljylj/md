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
	{ 0xa83588eb, __VMLINUX_SYMBOL_STR(dm_rh_recovery_end) },
	{ 0xfad9d53a, __VMLINUX_SYMBOL_STR(dm_rh_get_region_size) },
	{ 0xa68e1f06, __VMLINUX_SYMBOL_STR(dm_rh_get_state) },
	{ 0xd431fe5b, __VMLINUX_SYMBOL_STR(dm_rh_inc_pending) },
	{ 0xfc62ef4e, __VMLINUX_SYMBOL_STR(dm_rh_get_region_key) },
	{ 0x2ffb5a2a, __VMLINUX_SYMBOL_STR(dm_region_hash_create) },
	{ 0xd8aa4284, __VMLINUX_SYMBOL_STR(dm_rh_region_context) },
	{ 0xa53387c7, __VMLINUX_SYMBOL_STR(dm_rh_flush) },
	{ 0x1d2f9ac, __VMLINUX_SYMBOL_STR(dm_rh_recovery_start) },
	{ 0xbe38a431, __VMLINUX_SYMBOL_STR(dm_rh_recovery_prepare) },
	{ 0xbaa84ef1, __VMLINUX_SYMBOL_STR(dm_rh_bio_to_region) },
	{ 0x7774620f, __VMLINUX_SYMBOL_STR(dm_rh_stop_recovery) },
	{ 0x7f6540a6, __VMLINUX_SYMBOL_STR(dm_rh_dirty_log) },
	{ 0x4430764e, __VMLINUX_SYMBOL_STR(dm_rh_region_to_sector) },
	{ 0x38efaf5a, __VMLINUX_SYMBOL_STR(dm_region_hash_destroy) },
	{ 0xc3938892, __VMLINUX_SYMBOL_STR(dm_rh_mark_nosync) },
	{ 0x9d042e22, __VMLINUX_SYMBOL_STR(dm_dirty_log_destroy) },
	{ 0x7d053fc5, __VMLINUX_SYMBOL_STR(dm_rh_start_recovery) },
	{ 0x3a18389a, __VMLINUX_SYMBOL_STR(dm_rh_update_states) },
	{ 0xfd93482e, __VMLINUX_SYMBOL_STR(dm_rh_recovery_in_flight) },
	{ 0xa672e060, __VMLINUX_SYMBOL_STR(dm_rh_delay) },
	{ 0x6244c70a, __VMLINUX_SYMBOL_STR(dm_dirty_log_create) },
	{ 0x45ab972a, __VMLINUX_SYMBOL_STR(dm_rh_dec) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-region-hash,dm-log";


MODULE_INFO(srcversion, "BF4E2399D57C1E4D5E45498");
