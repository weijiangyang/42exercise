#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
	int result;

	result = ft_recursive_power(2,4);
	printf("%d\n", result);
	return (0);
}

int ft_recursive_power(int nb, int power)
{

	if ( power == 1)
		return (nb);
	return ft_recursive_power(nb, power - 1) * nb;
}
