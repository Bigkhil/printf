#include "main.h"
/**
 * getlength - function to get length of number
 * @x: number
 * Return: int
 */
int getlength(int x)
{
	int cntr;

	if (x == 0)
		return (1);
	while (x != 0)
	{
		cntr++;
		x = x / 10;
	}
	return (cntr);
}
/**
 * printnum - function to print number
 * @num: string
 * Return: int
 */
int printnum(int num)
{
	int leng = getlength(num), i;
	char *arr = malloc(sizeof(char) * leng);

	for (i = (leng - 1) ; i >= 0 ; i--)
	{
		arr[i] = '0' + (num % 10);
		num = num / 10;
	}
	write(1, arr, leng);
	free(arr);
	return (leng);
}
