#include "main.h"

void rev_string(char *s)
{
	int i;
	int j;
	int n;

	i = 0;
	n = _strlen(s);
	j = n / 2;

	while (i < j)
	{
		 swap_int((int)&s[i], (int)&s[n]);
		 n--;
		 i++;
	}
}
int main(){
	char *str = "labbiz";
	printf("%s\n", str);
	rev_string(str);
	printf("%s", str);
}
