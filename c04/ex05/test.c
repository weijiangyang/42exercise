/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:42:23 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/26 21:44:07 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_base_valide(char *base);
int	chars_to_int(char *str, char *base, int size);
int	number_match(char letter, char *base);
int	ft_pow(int nbr, int size);
int	ft_atoi_base(char *str, char *base);

/*int	main(void)
{
	int	result;

	char	*base = "0123456789abcdef";
	char	*str = "-+++-cafe-12";
	result = ft_atoi_base(str, base);
	printf ("%d\n", result);
	return (0);
}*/

int	ft_atoi_base(char *str, char *base)
{
	char	dest[1000];
	int		index;
	int		sign;
	int		compte;

	compte = 0;
	index = 0;
	while (*str && !number_match(*str, base))
	{
		if (*str == '-')
			compte ++;
		str++;
	}
	while (*str && number_match(*str, base))
	{
		dest[index] = *str;
		index++;
		str++;
	}
	if (compte % 2)
		sign = -1;
	return (sign * chars_to_int(dest, base, index));
}

int	number_match(char letter, char *base)
{
	int	index;

	while (*base)
	{
		if (*base != letter)
			base++;
		else
			return (1);
	}
	return (0);
}

int	is_base_valide(char *base)
{
	int	size;
	int	index;
	int	j;

	index = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[index])
	{
		if (base[index] == '+' || base[index] == '-')
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

int	ft_pow(int nbr, int size)
{
	int	result;
	int	index;

	result = 1;
	index = 0;
	while (index < nbr)
	{
		result *= size;
		index++;
	}
	return (result);
}

int	chars_to_int(char *str, char *base, int size)
{
	int	result;
	int	index;
	int	j;

	index = size - 1;
	j = 0;
	result = 0;
	while (index >= 0)
	{
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
	return (result);
}
