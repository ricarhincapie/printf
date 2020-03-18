#include "holberton.h"
/**
 * print_c - print only the character
 * @data: this is a data.
 * Return: the number
 */

int print_c(va_list data)
{
	int i;

	i = va_arg(data, int);
	_putchar(i);
	return (1);
}
/**
 * print_id - print a integer with i and d
 * @data: this is a data.
 * Return: an integer
 */

int print_id(va_list data)
{
	int input;
	int tmp;
	int s;
	int ret_count;

	input = va_arg(data, int);/*Input variable from the outside*/
	/*printf("--- Test print_id data imput: %d ---", i);*/
	/*_putcharint(i);*/
	ret_count = 0;

	if (input < 0)
	{
		_putchar(45);
		ret_count += 1;
		tmp = (input * -1);
	}
	else
		tmp = input;
	s = tmp;

	if (s < 10 && s >= 0)
	{
		_putchar(s + '0');
		ret_count += 1;
	}
	if (s > 9 && s < 1000)
	{
		ret_count += print_id_letho(s);/*Func for less than 1000*/
	}
	if (s >= 1000)
	{
		ret_count += print_id_motho(s);/*Func for more than 1000*/
	}
	return (0);
}
/**
 * print_s - this is a function to print a string
 * @data: this is a data.
 * Return: an integer.
 */
int print_s(va_list data)
{
	char *s;
	int lenght;

	if (data == NULL)
		return (NULL);
	s = va_arg(data, char *);
	lenght = _puts(s);
	return (lenght);
}
