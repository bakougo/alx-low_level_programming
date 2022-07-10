#include "main.h"

/**
 * _strspn - get lenth of a substring
 *@s: The string to be searche
 *@accept: The prefix to be measured.
 *
 * Return: the number of bytes(n) in the initial segment of s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
