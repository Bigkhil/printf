#include "main.h"
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
	if (format == NULL)
	{
		return (-1);
	}
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
			default:
			return (-1);
		}
		x++;
		temp = printstr(x);
		cntr += (temp - x);
		x = temp;
	}
	return (cntr);
}
