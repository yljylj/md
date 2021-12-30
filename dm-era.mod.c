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
	{ 0x827a42f4, __VMLINUX_SYMBOL_STR(dm_tm_open_with_sm) },
	{ 0x40f7bd91, __VMLINUX_SYMBOL_STR(dm_tm_inc) },
	{ 0x48e323be, __VMLINUX_SYMBOL_STR(dm_bm_unlock) },
	{ 0xed1e1f96, __VMLINUX_SYMBOL_STR(dm_btree_remove) },
	{ 0x24fa6664, __VMLINUX_SYMBOL_STR(dm_bitset_set_bit) },
	{ 0x688d422d, __VMLINUX_SYMBOL_STR(dm_bm_block_size) },
	{ 0x88295b96, __VMLINUX_SYMBOL_STR(dm_tm_unlock) },
	{ 0xd163cade, __VMLINUX_SYMBOL_STR(dm_tm_commit) },
	{ 0x5aed1dd7, __VMLINUX_SYMBOL_STR(dm_bitset_flush) },
	{ 0xaee02382, __VMLINUX_SYMBOL_STR(dm_btree_empty) },
	{ 0xffff2ac3, __VMLINUX_SYMBOL_STR(dm_bitset_resize) },
	{ 0x832bf228, __VMLINUX_SYMBOL_STR(dm_array_del) },
	{ 0x17c36f29, __VMLINUX_SYMBOL_STR(dm_bm_checksum) },
	{ 0xba47c03a, __VMLINUX_SYMBOL_STR(dm_bitset_del) },
	{ 0x72289260, __VMLINUX_SYMBOL_STR(dm_block_manager_destroy) },
	{ 0xed58cfa1, __VMLINUX_SYMBOL_STR(dm_bitset_empty) },
	{ 0x4360913e, __VMLINUX_SYMBOL_STR(dm_btree_find_lowest_key) },
	{ 0x32b5f546, __VMLINUX_SYMBOL_STR(dm_array_empty) },
	{ 0xf375d009, __VMLINUX_SYMBOL_STR(dm_bm_write_lock) },
	{ 0xab96bd2d, __VMLINUX_SYMBOL_STR(dm_bitset_test_bit) },
	{ 0x858c8d94, __VMLINUX_SYMBOL_STR(dm_array_set_value) },
	{ 0x7ade1071, __VMLINUX_SYMBOL_STR(dm_tm_destroy) },
	{ 0x966a8838, __VMLINUX_SYMBOL_STR(dm_btree_lookup) },
	{ 0xf12ec3cd, __VMLINUX_SYMBOL_STR(dm_disk_bitset_init) },
	{ 0xafeda29f, __VMLINUX_SYMBOL_STR(dm_bm_write_lock_zero) },
	{ 0xa87c5b4d, __VMLINUX_SYMBOL_STR(dm_array_resize) },
	{ 0x55b4bd4d, __VMLINUX_SYMBOL_STR(dm_tm_create_with_sm) },
	{ 0xf5455120, __VMLINUX_SYMBOL_STR(dm_bm_read_lock) },
	{ 0x54f69d, __VMLINUX_SYMBOL_STR(dm_tm_pre_commit) },
	{ 0x2c112836, __VMLINUX_SYMBOL_STR(dm_block_location) },
	{ 0xd29923fb, __VMLINUX_SYMBOL_STR(dm_tm_shadow_block) },
	{ 0xbd50ebbb, __VMLINUX_SYMBOL_STR(dm_btree_del) },
	{ 0xfd519209, __VMLINUX_SYMBOL_STR(dm_block_manager_create) },
	{ 0x1e3f728d, __VMLINUX_SYMBOL_STR(dm_block_data) },
	{ 0x42dbdfc3, __VMLINUX_SYMBOL_STR(dm_tm_read_lock) },
	{ 0x2025e954, __VMLINUX_SYMBOL_STR(dm_array_info_init) },
	{ 0xca40abd5, __VMLINUX_SYMBOL_STR(dm_btree_insert) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-persistent-data";


MODULE_INFO(srcversion, "253F5CE1C5C567A3C699A59");
