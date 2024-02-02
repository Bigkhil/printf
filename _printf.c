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
	int cntr = 0;
	const char *x, *temp;

	if (format == NULL)
		write(2, "Error", strlen("Error"));
	va_start(ap, format);
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
			if (stringstart == NULL)
				write(2, "Error", strlen("Error"));
			stringend = printstringspecifier(stringstart);
			cntr += (stringend - stringstart);
			break;
			default:
			write(2, "Error", strlen("Error"));
		}
		x++;
		temp = printstr(x);
		cntr += (temp - x);
		x = temp;
	}
	va_end(ap);
	return (cntr);
}
