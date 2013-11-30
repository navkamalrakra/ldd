#include<linux/init.h>		/* Needed for the macros */
#include<linux/module.h>	/* Needed by all modules */	

static int module_entry(void){
	printk(KERN_ALERT "Hello World !!\n");
	return 0;
}


static void exit_module(void){
	printk(KERN_ALERT "Bye World .... \n");
}
module_init(module_entry);
module_exit(exit_module);

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Navkamal Rakra");
MODULE_DESCRIPTION("Hello World module for starters");
