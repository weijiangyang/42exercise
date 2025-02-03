/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:40:48 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/03 11:44:29 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	put_str(char *str)
{
	char	zero;

	zero = '\0';
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	write (1, &zero, 1);
}

void	put_nbr(int nbr)
{
	char	sign;
	char	zero;
	char	digit;

	if (nbr < 0)
	{
		sign = '-';
		write (1, &sign, 1);
		nbr = -1 * nbr;
	}
	if (nbr == 0)
	{
		zero = '0';
		write (1, &zero, 1);
	}
	if (nbr > 0)
	{
		put_nbr(nbr / 10);
		digit = nbr % 10 + '0';
		write (1, &digit, 1);
	}
}

int	main(void)
{
	int	nbr;

	nbr = 0;
	put_nbr(nbr);
	return (0);
}
