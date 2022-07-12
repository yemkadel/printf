#include "main.h"
/**
 * _printf - this function emulates the standard printf
 * @format: the string to be formatted
 *
 * Return: Int (the number of char that got printed)
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;

	va_start(args, format);
	/*count number of characters printed*/
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i] != '\0'; )
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					/*use va_list here*/
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += print_str(va_arg(args, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					break;

			}
			i += 2;
		}
	}

	return (count);
}
