#include <stdio.h>

int main (void)
{
	char *str = "salut";
	int size;


	size = sizeof(str) ;
	printf ("%d", size);
	return 0;
}

