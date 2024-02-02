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
	int len, number;

	number = 1054165;
	len = _printf("%i\n", number);
	printf("%d\n", len);
	return (0);
}
