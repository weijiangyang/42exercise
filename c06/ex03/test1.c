#include <stdio.h>

void test_ft(char **str);

int main(void)
{
	char **str; 

	**str = "hello"; 
	test_ft(str);
	return 0;
}

void test_ft(char **str)
{
	printf("%s", *str);
}
