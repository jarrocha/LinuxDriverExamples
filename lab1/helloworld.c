#include <linux/module.h>

static int __init hello_init(void)
{
    pr_info("Hello world init\n");
    return 0;
}

static void __exit hello_exit(void)
{
    pr_info("Hellow world exit\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jaime Arrocha <jarrocha.dev@gmail.com");
MODULE_DESCRIPTION("This is a Hello World module");