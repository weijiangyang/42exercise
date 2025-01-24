/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 22:08:43 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/24 11:36:42 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	chars_to_int(char *str, int size);
int	ten_pow(int nbr);
int	ft_atoi(char *str);
int	is_digit(char letter);
int	is_negative(char *str);

int	main(void)
{
	int	result;

	result = ft_atoi("-- ---+--+--120b567");
	printf ("%d", result);
	return (0);
}

int	ft_atoi(char *str)
{
	char	dest[1000];
	int		index;
	int		result;

	index = 0;
	if (is_negative(str))
	{
		dest[0] = '-';
		index++;
	}
	while (!is_digit(*str))
		str++;
	while (is_digit(*str))
	{
		dest[index] = *str;
		str++;
		index++;
	}
	dest[index] = '\0';
	return (chars_to_int(dest, index));
}

int	is_digit(char letter)
{
	char	*nbs;

	nbs = "0123456789";
	while (*nbs)
	{
		if (*nbs == letter)
			return (1);
		nbs++;
	}
	return (0);
}

int	is_negative(char *str)
{
	int	compte;

	compte = 0;
	while (!is_digit(*str))
	{
		if (*str == '-')
			compte++;
		str++;
	}
	if (compte % 2)
		return (1);
	else
		return (0);
}

int	chars_to_int(char *str, int size)
{
	int	result;
	int	index;
	int	sign;

	sign = 1;
	index = 1;
	result = 0;
	if (*str == '-')
	{
		sign = -1 ;
		str++;
		index++;
	}
	while (*str)
	{
		result += ((int)*str - 48) * ten_pow(size - index);
		index++;
		str++;
	}
	return (sign * result);
}

int	ten_pow(int nbr)
{
	int	result;
	int	index;

	result = 1;
	index = 0;
	while (index < nbr)
	{
		result *= 10;
		index++;
	}
	return (result);
}
