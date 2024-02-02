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

	len = printf("%K\n");
	printf("%d\n", len);
	len = _printf("%K\n");
	printf("%d\n", len);
	return (0);
}
