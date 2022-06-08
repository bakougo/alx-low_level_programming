#include "_putchar.c"
#include <unistd.h>

int _purchar(char a)
{
	return (write(1, &a, 1));
}
