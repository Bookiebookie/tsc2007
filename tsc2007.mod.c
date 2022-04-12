#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcaec5711, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe2888949, "i2c_del_driver" },
	{ 0x8bfb4418, "gpio_to_desc" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x406f2bb0, "input_set_abs_params" },
	{ 0xcc27a234, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xbd911895, "i2c_smbus_read_word_data" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x33308ec, "_dev_warn" },
	{ 0xab1e702d, "devm_iio_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x226a7495, "__devm_iio_device_register" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb8f4a185, "input_set_capability" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x69972bcf, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcc19602c, "i2c_register_driver" },
	{ 0xff072720, "devm_add_action" },
	{ 0x79c9bd4a, "of_property_read_u64" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc3f9852e, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf59bf672, "of_get_named_gpio_flags" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x22e39d77, "devm_input_allocate_device" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6b9e430b, "gpiod_get_raw_value" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd38d8d6f, "of_property_read_variable_u32_array" },
	{ 0x85a03920, "devm_kmalloc" },
	{ 0xa8b204ef, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:tsc2007");
MODULE_ALIAS("of:N*T*Cti,tsc2007");
MODULE_ALIAS("of:N*T*Cti,tsc2007C*");

MODULE_INFO(srcversion, "410273B6860FB863FF5085B");
