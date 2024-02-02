#include "main.h"
void printchar(int ch)
{
	write(1, &ch, 1);
}
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
/**
 * _printf - function to print formatted string
 * @format: string
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int cntr;
	const char *x;

	va_start(ap, format);
	cntr = 0;
	x = printstr(format);
	while (*x != '\0')
	{
		x++;
		switch (*x)
		{
			case ('c'):
			printchar(va_arg(ap, int));
			break;
			case ('%'):
			write(1, x, 1);
			break;
			case ('s'):
			
		}
	}
	cntr += (x - format);
}
