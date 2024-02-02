#include "main.h"
/**
 * printstr - function to print string
 * @str: string
 * Return: const * char
 */
const char *printstr(const char *str)
{
	while (*str != '\0' && *str != '%')
	{
		write(1, str, 1);
		str++;
	}
	return (str);
}
