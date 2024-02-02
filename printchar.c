#include "main.h"
/**
 * printchar - function to print string
 * @ch: char
 * Return: void
 */
int printchar(int ch)
{
	write(1, &ch, 1);
	return (1);
}
