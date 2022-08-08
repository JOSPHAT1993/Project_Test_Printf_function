#include "main.h"
#include <unistd.h>
/**
 * _putchar-main function to print a char
 *
 * @c:'Character variable'
 *
 * Return:Write function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
