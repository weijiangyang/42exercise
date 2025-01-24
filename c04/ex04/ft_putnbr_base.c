/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 21:55:28 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/24 12:06:28 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		is_base_valide(char *base);
int		is_double(char *base);

int	main(void)
{
	ft_putnbr_base(-750, "0123456789abcdef");
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	char	negative;

	negative = '-';
	size = is_base_valide(base);
	if (is_base_valide(base) && nbr < 0)
	{
		nbr = -nbr;
		write (1, &negative, 1);
	}
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
	return (size);
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
