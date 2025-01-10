/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 21:55:28 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/10 22:00:50 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		is_base_valide(char *base);
int		is_double(char *base);
int		size_char(char *str);

int	main(void)
{
	ft_putnbr_base(125, "01");
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = size_char(base);
	if (is_base_valide(base) && nbr > 0)
	{
		ft_putnbr_base(nbr / size, base);
		write (1, &base[nbr % size], 1);
	}
}

int	is_base_valide(char *base)
{
	int	size;

	size = size_char(base);
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

	size = size_char(str);
	i = 0;
	while (size - 1)
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

int	size_char(char *str)
{
	int	compte;

	compte = 0;
	while (*str)
	{
		compte++;
		str++;
	}
	return (compte);
}
