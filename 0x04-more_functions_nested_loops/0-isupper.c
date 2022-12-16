#include <stdio.h>

/**
 * function - check the c if uppercase or not
 * if yes return 1
 * if false return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
