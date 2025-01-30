#include <stdio.h>

char *test(void);

char * main(void)
{
	char *str;

	str = test();
	printf ("%s\n", str);
	return 0;
}

char *test(void)
{
	char *str = "hello";
	return str;
}
