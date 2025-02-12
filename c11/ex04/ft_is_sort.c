#include <stdio.h>
#include <stdlib.h>

int compare_nbs(int a, int b)
{
	if (a < b)
		return -1;
	else if ( a == b)
		return 0;
	else
		return 1;
}

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int j;
	int result;

	i = 0;
	result = f(tab[i], tab[i + 1]);
	i++;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			if (result * f(tab[i], tab[j]) == -1)
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}	
			
int main(void)
{
	int tab[3] = { 112, 13, 15};
	int length = 3;
	int result;

	result = ft_is_sort(tab, 3, compare_nbs);
	printf ("%d\n", result);
	return 0;
}
