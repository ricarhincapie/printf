#include "holberton.h"

/**
 * print_id_letho - prints to stdout the int less than 1000
 *
 * @s: The int argument passed to _printf
 *
 * Return: the # of chars printed
 */

int print_id_letho(int s)
{
	int divs;

	if (s > 9 && s < 100)
	{
		divs = 10;
		while (divs > 0)
		{
			_putchar(((s / divs) % 10) + '0');
			divs /= 10;
		}
	return (2);
	}

	else/*(s > 99 && s < 1000)*/
	{
		divs = 100;
		while (divs > 0)
		{
			_putchar(((s / divs) % 10) + '0');
			divs /= 10;
		}
	return (3);
	}
}
