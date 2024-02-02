#include "main.h"
/**
 * printstringspecifier - function to print string
 * @p: pointer to char
 * Return: pointer to char
 */
char *printstringspecifier(char *p)
{
	while (*p != '\0')
	{
		write(1, p, 1);
		p++;
	}
	return (p);
}
