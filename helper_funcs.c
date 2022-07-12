#include "main.h"
/**
 * print_str - prints and counts characters in a string
 * @s: the string 
 *
 * Return: Int
 */
int print_str(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count += _putchar(s[i]);		
	}	
	return (count);
}

/**
 * print_int - this func handles the printing of 'd' derivative
 * @d: int to be printed
 *
 * Return: Int
 */
int print_num(int num)
{
	int count = 0;
	
	if (num < 0)
	{
		count += _putchar('-');
		num *= -1;
	}

	if (num / 10)
		count += print_num(num / 10);

	count += _putchar((num % 10) + '0');
	return (count);
}
