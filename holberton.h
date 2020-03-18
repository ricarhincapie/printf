#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct formats - this is a struct formats
 * @format_module: this is a format of our module
 * @to_pr_f: this is pointer to the necesary functions
 */
typedef struct formats
{
	char *format_module;
	int (*to_pr_f)(va_list);
} formats;
int print_id(va_list data);
int _putcharint(int c);
int _putsint(int n);
int _strlen(char *s);
int _putchar(int c);
int _puts(char *s);
int _printf(const char *format, ...);
int print_c(va_list data);
int print_s(va_list data);
int print_module(va_list data);
int print_id_motho(int s);
int print_id_letho(int s);

#endif /* HOLBERTON_H */
