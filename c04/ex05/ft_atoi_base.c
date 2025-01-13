/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:04:38 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/13 21:15:00 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi_base(char *str, char *base);
int		ten_pow(int nbr);
void	ft_putnbr_base(int nbr, char *base);
int		is_base_valide(char *base);
int		is_double(char *str);

int	main(void)
{
	char	*str;
	int		result;

	str = "12345";
	ft_atoi_base(str, "0123456789abcde");
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	index;
	int	result;
	int	size;
	int	copied[1000];

	index = 0;
	result = 0;
	while (*str)
	{
		copied[index] = (int)*str - 48;
		str++;
		index++;
	}
	size = index;
	while (index > 0)
	{
		result += copied[index - 1] * ten_pow(size - index);
		index--;
	}
	ft_putnbr_base(result, base);
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = 0;
	while (*base)
	{
		size++;
		base++;
	}
	base = base - size;
	if (is_base_valide(base) && nbr > 0)
	{
		ft_putnbr_base(nbr / size, base);
		write (1, &base[nbr % size], 1);
	}
}

int	is_base_valide(char *base)
{
	int	size;

	size = 0;
	while (*base)
	{
		size++;
		base++;
	}
	base = base - size;
	if (size <= 1)
		return (0);
	if (is_double(base))
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		base ++;
	}
	return (1);
}

int	is_double(char *str)
{
	int	i;
	int	j;
	int	size;

	size = 0;
	while (*str)
	{
		size++;
		str++;
	}
	str = str - size;
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
