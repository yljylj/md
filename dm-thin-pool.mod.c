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
	{ 0x3646e38f, __VMLINUX_SYMBOL_STR(dm_tm_issue_prefetches) },
	{ 0x87c569ce, __VMLINUX_SYMBOL_STR(dm_cell_visit_release) },
	{ 0x48e323be, __VMLINUX_SYMBOL_STR(dm_bm_unlock) },
	{ 0xed1e1f96, __VMLINUX_SYMBOL_STR(dm_btree_remove) },
	{ 0x42d1207a, __VMLINUX_SYMBOL_STR(dm_btree_lookup_next) },
	{ 0x1445176, __VMLINUX_SYMBOL_STR(dm_btree_find_highest_key) },
	{ 0x688d422d, __VMLINUX_SYMBOL_STR(dm_bm_block_size) },
	{ 0x4944c6a4, __VMLINUX_SYMBOL_STR(dm_bio_prison_free_cell) },
	{ 0x88295b96, __VMLINUX_SYMBOL_STR(dm_tm_unlock) },
	{ 0xd163cade, __VMLINUX_SYMBOL_STR(dm_tm_commit) },
	{ 0x6791a44e, __VMLINUX_SYMBOL_STR(dm_deferred_entry_dec) },
	{ 0x9f624559, __VMLINUX_SYMBOL_STR(dm_sm_disk_open) },
	{ 0xaee02382, __VMLINUX_SYMBOL_STR(dm_btree_empty) },
	{ 0xb70b342a, __VMLINUX_SYMBOL_STR(dm_bio_prison_destroy) },
	{ 0xbcef17e2, __VMLINUX_SYMBOL_STR(dm_cell_release) },
	{ 0x2f40da68, __VMLINUX_SYMBOL_STR(dm_bm_set_read_write) },
	{ 0x17c36f29, __VMLINUX_SYMBOL_STR(dm_bm_checksum) },
	{ 0x72289260, __VMLINUX_SYMBOL_STR(dm_block_manager_destroy) },
	{ 0xca2e3a88, __VMLINUX_SYMBOL_STR(dm_deferred_entry_inc) },
	{ 0xf375d009, __VMLINUX_SYMBOL_STR(dm_bm_write_lock) },
	{ 0x9e798e22, __VMLINUX_SYMBOL_STR(dm_bm_set_read_only) },
	{ 0x109cda31, __VMLINUX_SYMBOL_STR(dm_bio_prison_alloc_cell) },
	{ 0x7b047bd9, __VMLINUX_SYMBOL_STR(dm_tm_create_non_blocking_clone) },
	{ 0x7ade1071, __VMLINUX_SYMBOL_STR(dm_tm_destroy) },
	{ 0x966a8838, __VMLINUX_SYMBOL_STR(dm_btree_lookup) },
	{ 0xb9a6ecf8, __VMLINUX_SYMBOL_STR(dm_tm_dec) },
	{ 0xafeda29f, __VMLINUX_SYMBOL_STR(dm_bm_write_lock_zero) },
	{ 0x53833d5b, __VMLINUX_SYMBOL_STR(dm_cell_release_no_holder) },
	{ 0x49b35849, __VMLINUX_SYMBOL_STR(dm_sm_disk_create) },
	{ 0x55b4bd4d, __VMLINUX_SYMBOL_STR(dm_tm_create_with_sm) },
	{ 0xf5455120, __VMLINUX_SYMBOL_STR(dm_bm_read_lock) },
	{ 0x89f1e1cc, __VMLINUX_SYMBOL_STR(dm_btree_insert_notify) },
	{ 0x2eb01e04, __VMLINUX_SYMBOL_STR(dm_deferred_set_destroy) },
	{ 0x604db1b, __VMLINUX_SYMBOL_STR(dm_btree_remove_leaves) },
	{ 0x54f69d, __VMLINUX_SYMBOL_STR(dm_tm_pre_commit) },
	{ 0x30ddae39, __VMLINUX_SYMBOL_STR(dm_cell_error) },
	{ 0x2c112836, __VMLINUX_SYMBOL_STR(dm_block_location) },
	{ 0xd29923fb, __VMLINUX_SYMBOL_STR(dm_tm_shadow_block) },
	{ 0xb6d5c65d, __VMLINUX_SYMBOL_STR(dm_deferred_set_add_work) },
	{ 0xbd50ebbb, __VMLINUX_SYMBOL_STR(dm_btree_del) },
	{ 0x753e20b2, __VMLINUX_SYMBOL_STR(dm_bio_prison_create) },
	{ 0xfd519209, __VMLINUX_SYMBOL_STR(dm_block_manager_create) },
	{ 0x95a52abd, __VMLINUX_SYMBOL_STR(dm_bm_is_read_only) },
	{ 0x1e3f728d, __VMLINUX_SYMBOL_STR(dm_block_data) },
	{ 0x42dbdfc3, __VMLINUX_SYMBOL_STR(dm_tm_read_lock) },
	{ 0xca40abd5, __VMLINUX_SYMBOL_STR(dm_btree_insert) },
	{ 0x17dd39d6, __VMLINUX_SYMBOL_STR(dm_deferred_set_create) },
	{ 0xc1184769, __VMLINUX_SYMBOL_STR(dm_bio_detain) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-persistent-data,dm-bio-prison";


MODULE_INFO(srcversion, "E17BA1017A0D10CB2D18D43");
