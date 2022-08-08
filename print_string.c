#include "main.h"
/**
 * print_string-main function to print a string
 *
 * @str:'Variable for string'
 *
 * Return:String count
 */
int print_string(char *str)
{
	int count = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		count += _putchar(str[i]);
	}
	return (count);
}
