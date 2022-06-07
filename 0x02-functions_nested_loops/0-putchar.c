#include <stdio.h>
#include "_putchar.c"
#include "main.h"

/**
 * main - Check description
 * Description: Prints the word _putchar, followed by a new line
 * Return: 0.
 */
int main(void)
{
	char word[8] = "_putchar";
	int f;

	for (f = 0; f < 8; f++)
		putchar(word[f]);
	putchar('\n');

	return (0);
}
