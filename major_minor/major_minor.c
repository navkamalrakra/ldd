#include<linux/module.h>
#include<linux/version.h>
#include<linux/types.h>
#include<linux/kdev_t.h>
#include<linux/fs.h>

static dev_t num;

static int entry_module(void)
{
	if (alloc_chrdev_region(&num, 0, 3, "Navkamal Rakra") < 0)
	{
		return -1;
	}
	printk(KERN_INFO "Registered with %d as Major and %d as Minor\n",MAJOR(num),MINOR(num));
	return 0;
}

static void bye_module(void)
{
	unregister_chrdev_region(num,3);
	printk(KERN_INFO "Unregistered successfully, Good to Go\n");
}

module_init(entry_module);
module_exit(bye_module);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Navkamal Rakra");
