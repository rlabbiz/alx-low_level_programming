#include "main.h"
#include <stdio.h>

/**
 * function - check the c if uppercase or not
 * if yes return 1
 * if false return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
