#include "holberton.h"
/**
 * _printf - this is a print_all
 *@format: this is a format
 *Return: an integer
 */
int _printf(const char *format, ...)
{
	formats data_arrange[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_id},
		{"i", print_id},
		{NULL, NULL}
	};
	va_list data_elipse;
	unsigned int cont_strc, cont_frmt = 0;
	int n_return, func_return = 0;

	if(format == NULL)
		return (-1);
	va_start(data_elipse, format);
	while (format && format[cont_frmt])
	{
		if (format[cont_frmt] != '%')
		{
			_putchar(format[cont_frmt]);
			cont_frmt++;
			n_return++;
		}
		else
		{
			cont_strc = 0;
			cont_frmt += 1;
			if (!format[cont_frmt])
				return (-1);
			if (format[cont_frmt] == '%')
			{
				_putchar('%');
				n_return++;
			}

			while (data_arrange[cont_strc].format_module)
			{
				if (data_arrange[cont_strc].format_module[0] == format[cont_frmt])
				{
					func_return = data_arrange[cont_strc].to_pr_f(data_elipse);
					n_return += func_return;
				}
				cont_strc++;
			}
			cont_frmt++;
		}
	}
	va_end(data_elipse);
	return (n_return);
}


