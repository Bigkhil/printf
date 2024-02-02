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
	while (*x != '\0' && x)
	{
		x++;
		switch (*x)
		{
			case ('c'):
			(va_arg(ap, int) != NULL) ? printchar(va_arg(ap, int)) : perror("error");
			cntr++;
			break;
			case ('%'):
			write(1, x, 1);
			cntr++;
			break;
			case ('s'):
			(va_arg(ap, char *) != NULL) ?
			 stringstart = va_arg(ap, char *) : perror("error");
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
