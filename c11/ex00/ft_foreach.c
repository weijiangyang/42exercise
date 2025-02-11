#include <unistd.h>

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		write(1, "\n",1);
		i++;
	}
}

/*void ft_putnbr(int n)
{
        char c;

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

int main(void)
{
	int tab[] = {1,23,28};
	int length = 3;
	ft_foreach(tab, length, &ft_putnbr);
	return 0;
}*/
