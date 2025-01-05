#include <stdio.h>
#include <string.h>

int main(void)
{
	char	dest[100] = "hello";
	char	*src = "les gars!";
	char	*result;
	result = strcat(dest, src);
	printf("%s", result);
	return 0;
}
