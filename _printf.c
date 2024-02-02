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
/**
 * printchar - function to print string
 * @ch: char
 * Return: void
 */
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
	char *stringstart, *stringend;
	int cntr;
	const char *x, *temp;

	va_start(ap, format);
	cntr = 0;
	x = printstr(format);
	cntr += (x - format);
	while (*x != '\0')
	{
		x++;
		switch (*x)
		{
			case ('c'):
			printchar(va_arg(ap, int));
			cntr++;
			break;
			case ('%'):
			write(1, x, 1);
			cntr++;
			break;
			case ('s'):
			stringstart = va_arg(ap, char *);
			stringend = printstringspecifier(stringstart);
			cntr += (stringend - stringstart);
			break;
		}
		x++;
		temp = printstr(x);
		cntr += (temp - x);
		x = temp;
	}
	va_end(ap);
	return (cntr);
}
