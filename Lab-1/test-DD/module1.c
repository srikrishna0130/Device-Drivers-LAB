#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>

static int init_mod(void)
{
	printk(KERN_INFO"module1 started... \n");
	return(0);
}

static void end_mod(void)
{
	printk(KERN_INFO"module1 ended... \n");
}

module_init(init_mod);
module_exit(end_mod);

MODULE_LICENSE("GPU");
MODULE_AUTHOR("SRIKRISHNA");
MODULE_DESCRIPTION("TEST_DRIVER_MODULE");