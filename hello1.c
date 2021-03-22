#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>
static int __init init_mod ( void ) /* Constructor */
{
    printk (KERN_INFO "Module1 start\ n ");
    return 0;
}
static void __exit end_mod ( void ) /* Destructor */
{
	printk (KERN_INFO "Module1 end\ n ");
}
module_init ( init_mod );
module_exit ( end_mod );
MODULE_LICENSE (" GPL ");
MODULE_AUTHOR (" SUIKAMMD");
MODULE_DESCRIPTION (" Driver Module ");

