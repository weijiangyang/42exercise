#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putnbr(int n)
{
	char c;
	char s;

	if (n < 0)
	{
		write (1, "-", 1);
		if (n == -2147483648)
		{
			write (1, "2", 1);
			n = 147483648;
		}
		else
			n = -n;
		
	}
	if  (n/10 > 0)
	{
		ft_putnbr(n / 10);
		c = n % 10 + '0';
	}
	else
		c = n + '0';
	write (1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putnbr(atoi(argv[1]));
	}
	return 	0;
}
