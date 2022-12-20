#include "main.h"

void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
	write(1, "\n", 1);
}
