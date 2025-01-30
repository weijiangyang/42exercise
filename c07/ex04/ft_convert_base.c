#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int is_base_valide(char *base);
int number_match(char *nbr, char *base);
int ft_pow(int nbr, int size);
int     chars_to_int(char *str, char *base, int size);
char *int_to_chars(int nbr, char *base);
char *ft_convert_base(char *nbr, char *base_from, char *base_to);
int size_int_chars(int nbr, char *base);

int main(void)
{
	int nbr = 89745;
	int size = 16;
	char *str = "-cafe";
	char *base_from = "0123456789abcdef";
	char *base_to = "01";
	char *result;
	int testint;

	int test;

	test = chars_to_int(str, base_from , 5);
//	printf ("%d\n", test);
	result = ft_convert_base(str, base_from, base_to);
	printf ("%s\n", result);
	return 0;
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int result;
	char *result1;
	int size;

	size = 0;
	while (*nbr)
	{
		size++;
		nbr++;
	}
	nbr -= size;
	result = chars_to_int(nbr, base_from, size);
	result1 = int_to_chars(result, base_to);
	return result1;
}	

int     is_base_valide(char *base)
{
        int     size;
        int     index;
        int     j;

        index = 0;
        if (!base[0] || !base[1])
                return (0);
        while (base[index])
        {
                if (base[index] == '+' || base[index] == '-' || base[index] == ' ')
                        return (0);
                j = index + 1;
                while (base[j])
                {
                        if (base[j] == base[index])
                                return (0);
                        j++;
                }
                index++;
        }
        return (index);
}

int number_match(char *nbr, char *base)
{
	char *copied;
	int result;
	int sign;

	sign = 1;
	copied = base;
	if (*nbr == '-')
	{
		sign = -1;
		nbr++;
	}
	while (*nbr)
	{
		while (*copied)
		{
			result = 0;
			if (*nbr == *copied)
			{
				result = sign;
				break;
			}
			else
				copied++;
		 }
		 if ( result != 1 || result != -1)
			return result;
		copied = base;
		nbr++;
		
	}
	return result;
}

int ft_pow(int nbr, int size)
{
	int result;
	int i;

	i = 0;
	result = 1;
	while (i < nbr)
	{
		result *= size;
		i++;
	}
	return result;
}

int    chars_to_int(char *str, char *base, int size)
{
        int     result;
        int     index;
        int     j;
	int	sign;
	int	compte;

	compte = 0;
	sign = 1;
        index = size - 1;
        j = 0;
        result = 0;
        while (index >= 0)
        {
		if (str[index] == '-')
			compte++;
                while (j < is_base_valide(base))
                {
                        if (str[index] != base[j])
                                j++;
                        else
                        {
                                result += j * ft_pow(size - index - 1, is_base_valide(base));
                                break ;
                        }
                }
                j = 0;
                index--;
	}	
	if (compte % 2)
		sign = -1;
        return (result * sign);
}

char *int_to_chars(int nbr, char *base)
{
	char *str;
	int size;
	char temp;

	str = NULL;
	size = size_int_chars(nbr, base);
	str = malloc (size * sizeof(char) + 1);	
	str[size] = '\0';	
	if (nbr < 0)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	
	while (nbr > 0)
	{
		str[size - 1] = base[nbr % is_base_valide(base)];
		nbr /= is_base_valide(base);
		size--;
	}
	return str;
}
			
int size_int_chars(int nbr, char *base)
{
	int index;

	index = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		index++;
	}
	while (nbr > 0)
	{
		nbr /= is_base_valide(base);
		index++;
	}
	return index;
}
