#include "lists.h"
/**
 * before_main - whatever is here gets executed before entereing the main func.
 **/
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
