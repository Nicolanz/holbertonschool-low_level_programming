#include "lists.h"

void __attribute__ ((constructor)) function(void);
/**
 * function - It is executed before the main function
 *
 */
void function(void)
{
	printf("You're beat! and yet, you must allow,\nI bore");
	printf(" my house upon my back!\n");
}
