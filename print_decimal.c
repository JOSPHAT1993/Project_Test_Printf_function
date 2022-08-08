#include "main.h"
/**
 * print_decimal-main function to print d in printf
 *
 * @num:'Integer variable'
 *
 * Return:Integer parsed
 */
int print_decimal(int num)
{
	int count = 0;

	if (num < 0)
	{
		count += _putchar('-');
		num = num * -1;
	}
	if (num / 10)
	{
		count += print_decimal(num / 10);
	}
	count += _putchar(num % 10 + '0');

	return (count);
}
