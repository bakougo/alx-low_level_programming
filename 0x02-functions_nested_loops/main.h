#include <unistd.h>
#ifndef _PUTCHAR_FILE
#define _PUTCHAR_FILE

int _purchar(char a)
{
	return (write(1, &a, 1));
}
#endif
