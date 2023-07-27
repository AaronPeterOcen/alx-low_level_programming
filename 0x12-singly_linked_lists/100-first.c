#include "lists.h"

void prints_message(void) __attribute__ ((constructor));

/**
 * prints_message - prints a sentence before main
 * executed function
 */
void prints_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
