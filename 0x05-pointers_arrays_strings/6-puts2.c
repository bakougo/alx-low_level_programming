#include "main.h"

/**
 * puts2- prints every other character of a string to stdout
 * follwed by a new line
 * @str: input sring to print
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
