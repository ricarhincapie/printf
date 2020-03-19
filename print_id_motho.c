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
	if(s > 99999 && s < 1000000)
	{
		divs = 100000;
		while (divs > 0)
		{
			_putchar(((s / divs) % 10) + '0');
			divs /= 10;
		}
	return (6);
	}
	if(s > 999999 && s < 10000000)
	{
		divs = 1000000;
		while (divs > 0)
		{
			_putchar(((s / divs) % 10) + '0');
			divs /= 10;
		}
		return (7);
	}
	if(s > 9999999 && s < 100000000)
	{
		divs = 10000000;
		while (divs > 0)
		{
			_putchar(((s / divs) % 10) + '0');
			divs /= 10;
		}
		return (8);
	}
	if(s > 99999999 && s < 1000000000)
	{
		divs = 100000000;
		while (divs > 0)
		{
			_putchar(((s / divs) % 10) + '0');
			divs /= 10;
		}
		return (9);
	}
	/*if(s > 999999999 && s <= 2147483648)*/
	if(s >= 1000000000)
	{
		divs = 1000000000;
		while (divs > 0)
		{
			_putchar(((s / divs) % 10) + '0');
			divs /= 10;
		}
		_putchar(8);
		return (10);
	}
	else
		return (-1);
}
