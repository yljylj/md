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
	{ 0xd041d62b, __VMLINUX_SYMBOL_STR(dm_array_get_value) },
	{ 0x48e323be, __VMLINUX_SYMBOL_STR(dm_bm_unlock) },
	{ 0xf0af475c, __VMLINUX_SYMBOL_STR(dm_cell_lock_promote_v2) },
	{ 0x5dc50abf, __VMLINUX_SYMBOL_STR(dm_array_cursor_end) },
	{ 0x3e3d2d64, __VMLINUX_SYMBOL_STR(dm_cell_unlock_v2) },
	{ 0x24fa6664, __VMLINUX_SYMBOL_STR(dm_bitset_set_bit) },
	{ 0x688d422d, __VMLINUX_SYMBOL_STR(dm_bm_block_size) },
	{ 0xf64b2a15, __VMLINUX_SYMBOL_STR(dm_cell_quiesce_v2) },
	{ 0x46aeb0f5, __VMLINUX_SYMBOL_STR(dm_cell_get_v2) },
	{ 0xb8e88cd6, __VMLINUX_SYMBOL_STR(dm_bitset_cursor_begin) },
	{ 0xa95fb4b3, __VMLINUX_SYMBOL_STR(dm_bitset_cursor_skip) },
	{ 0xd163cade, __VMLINUX_SYMBOL_STR(dm_tm_commit) },
	{ 0x5aed1dd7, __VMLINUX_SYMBOL_STR(dm_bitset_flush) },
	{ 0xc8f629e2, __VMLINUX_SYMBOL_STR(dm_cell_lock_v2) },
	{ 0xb1368f32, __VMLINUX_SYMBOL_STR(dm_bitset_cursor_get_value) },
	{ 0xffff2ac3, __VMLINUX_SYMBOL_STR(dm_bitset_resize) },
	{ 0x832bf228, __VMLINUX_SYMBOL_STR(dm_array_del) },
	{ 0x2f40da68, __VMLINUX_SYMBOL_STR(dm_bm_set_read_write) },
	{ 0x17c36f29, __VMLINUX_SYMBOL_STR(dm_bm_checksum) },
	{ 0xba47c03a, __VMLINUX_SYMBOL_STR(dm_bitset_del) },
	{ 0x62c1b9ee, __VMLINUX_SYMBOL_STR(dm_array_walk) },
	{ 0x72289260, __VMLINUX_SYMBOL_STR(dm_block_manager_destroy) },
	{ 0xed58cfa1, __VMLINUX_SYMBOL_STR(dm_bitset_empty) },
	{ 0x1c15e8db, __VMLINUX_SYMBOL_STR(dm_cell_put_v2) },
	{ 0x32b5f546, __VMLINUX_SYMBOL_STR(dm_array_empty) },
	{ 0xf375d009, __VMLINUX_SYMBOL_STR(dm_bm_write_lock) },
	{ 0xfc0a1f28, __VMLINUX_SYMBOL_STR(dm_bitset_cursor_next) },
	{ 0xd1ce33f9, __VMLINUX_SYMBOL_STR(dm_bio_prison_free_cell_v2) },
	{ 0x9e798e22, __VMLINUX_SYMBOL_STR(dm_bm_set_read_only) },
	{ 0x858c8d94, __VMLINUX_SYMBOL_STR(dm_array_set_value) },
	{ 0x7ade1071, __VMLINUX_SYMBOL_STR(dm_tm_destroy) },
	{ 0xf499282e, __VMLINUX_SYMBOL_STR(dm_array_new) },
	{ 0xf12ec3cd, __VMLINUX_SYMBOL_STR(dm_disk_bitset_init) },
	{ 0x7657e859, __VMLINUX_SYMBOL_STR(dm_bitset_clear_bit) },
	{ 0xafeda29f, __VMLINUX_SYMBOL_STR(dm_bm_write_lock_zero) },
	{ 0x9ae39221, __VMLINUX_SYMBOL_STR(dm_array_cursor_begin) },
	{ 0xcd60623b, __VMLINUX_SYMBOL_STR(dm_bio_prison_alloc_cell_v2) },
	{ 0xcfd835c9, __VMLINUX_SYMBOL_STR(dm_array_cursor_get_value) },
	{ 0xa87c5b4d, __VMLINUX_SYMBOL_STR(dm_array_resize) },
	{ 0x55b4bd4d, __VMLINUX_SYMBOL_STR(dm_tm_create_with_sm) },
	{ 0x63171f45, __VMLINUX_SYMBOL_STR(dm_bitset_new) },
	{ 0xf5455120, __VMLINUX_SYMBOL_STR(dm_bm_read_lock) },
	{ 0x3ad0f55b, __VMLINUX_SYMBOL_STR(dm_bm_flush) },
	{ 0xd99e003d, __VMLINUX_SYMBOL_STR(dm_bio_prison_create_v2) },
	{ 0x54f69d, __VMLINUX_SYMBOL_STR(dm_tm_pre_commit) },
	{ 0xace9b57b, __VMLINUX_SYMBOL_STR(dm_bio_prison_destroy_v2) },
	{ 0x2c112836, __VMLINUX_SYMBOL_STR(dm_block_location) },
	{ 0x667bc92d, __VMLINUX_SYMBOL_STR(dm_bitset_cursor_end) },
	{ 0xfd519209, __VMLINUX_SYMBOL_STR(dm_block_manager_create) },
	{ 0x95a52abd, __VMLINUX_SYMBOL_STR(dm_bm_is_read_only) },
	{ 0x1e3f728d, __VMLINUX_SYMBOL_STR(dm_block_data) },
	{ 0x2025e954, __VMLINUX_SYMBOL_STR(dm_array_info_init) },
	{ 0x9e225593, __VMLINUX_SYMBOL_STR(dm_array_cursor_next) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-persistent-data,dm-bio-prison";


MODULE_INFO(srcversion, "936A97BEFB24B6A757F3242");
