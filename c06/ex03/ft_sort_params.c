#include <unistd.h>
#include <stdio.h>

void print_sort(char *str);

int main(void)
{
	print_sort("szrh");
	return (0);
}

void print_sort(char *str)
{
	int index = 0;
	char temp ;
	char copied[1000];
	int size;

	while (*str)
	{
		copied[index] = *str;
		str++;
		index++;
	}
	str = str - index ;
	size = index;
	index = 0;
	while (index < size - 1)
	{
		int j;
		j = index + 1;
		while (j < size)
		{
			if (copied[index] > copied[j])
			{
				temp = copied[index];
				copied[index] = copied[j];
				copied[j] = temp;
			}
			j++;
		}
		index++;
	}
	printf ("%s\n", copied);
}
