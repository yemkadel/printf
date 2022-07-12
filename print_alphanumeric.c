#include "main.h"
/**
 * print_string - print str
 * @l: va_list args
 * @f: func pointer
 *
 * Return: int
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints char
 * @l: va_list args
 * @f: func pointer
 *
 * Return: int
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
