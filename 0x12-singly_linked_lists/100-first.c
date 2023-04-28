#include <stdio.h>

void __attribute__((constructor)) start_main(void);

/**
 * start_main - prints a string before main function is executed.
 */

void start_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
