#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = printf("%c %%\n",NULL);
	printf("%d\n", len);
	len = printf("Should print a a single percent sign: %%\n");
	printf("%d\n", len);
	return (0);
}
