#include <unistd.h>
#include "holberton.h"
#include <stdio.h>

/**
 * print_id_motho - prints to stdout the int bigger than 1000
 *
 * @s: The int argument passed to _printf
 *
 * Return: the # of chars printed
 */

int print_id_motho(int s)
{
	int divs;

	if (s > 999 && s < 10000)
	{
		divs = 1000;
		while (divs > 0)
		{
			_putchar(((s / divs) % 10) + '0');
			divs /= 10;
		}
	return (4);
	}

	if (s > 9999 && s < 100000)
	{
		divs = 10000;
		while (divs > 0)
		{
			_putchar(((s / divs) % 10) + '0');
			divs /= 10;
		}
	return (5);
	}
	else/*if(s > 99999 && s < 1000000)*/
	{
		divs = 100000;
		while (divs > 0)
		{
			_putchar(((s / divs) % 10) + '0');
			divs /= 10;
		}
	return (6);
	}
}
