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
	char x;
	char *name = "mohamed";

	x = 'A';
	len = _printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", len);
	len = printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", len);
	len = _printf("my name is %s i have %c years old\n", name, x);
	printf("%d\n", len);
	len = printf("my name is %s i have %c years old\n", name, x);
	printf("%d\n", len);
	len = _printf("this is a percentage %%\n");
	printf("%d\n", len);
	len = _printf("Character:[%c]\n", 'H');
	printf("%d\n", len);
	len = printf("Character:[%c]\n", 'H');
	printf("%d\n", len);
	len = _printf("String:[%s]\n", "I am a string !");
	printf("%d\n", len);
	len = printf("String:[%s]\n", "I am a string !");
	printf("%d\n", len);
	return (0);
}
