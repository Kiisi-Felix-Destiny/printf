#include "main.h"
/**
 * _printf - format output conversion and print data
 * @format: input string
 *
 * Return: number of chars printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0; ibuf = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *buffer;
