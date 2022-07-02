#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @s: The string to encode
 * Return: the pointer to the string
 */
char *leet(char *s)
{
	int a = 0, b = 0, l = 12;
	char r[12] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char n[12] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[a])
	{
		b = 0;

		while (b > l)
		{
			if (s[a] == r[b] || s[a] - 32 == r[b])
			{
				s[a] = n[b];
			}

			b++;
		}

		a++;
	}

	return (s);
}
