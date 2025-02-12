#include <stdio.h>
#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int	 *res;
	int	i;

	i = 0;
	res = (int *)malloc ((length) * sizeof(int));
	if (res == NULL)
		return (NULL);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return res;
}

int ft_double(int nb)
{
	int result;
	
	result = nb * 2;
	return result;
}

int main(void)
{
	int *result;
	int i;

	int tab[4] = {1, 2, 3, 4};
	i = 0;
	result = ft_map(tab, 4, ft_double);
	while (i < 4)
	{
		printf ("%d\n", result[i]);
		i++;
	}
	free(result);
	return 0;
}
	
