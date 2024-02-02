#include "main.h"
/**
 * printchar - function to print string
 * @ch: char
 * Return: void
 */
void printchar(int ch)
{
	write(1, &ch, 1);
}
