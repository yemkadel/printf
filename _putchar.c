#include "main.h"
/**
 * _putchar - prints a char to the stdout
 * @c: the char to be printed
 *
 * Return: Int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
