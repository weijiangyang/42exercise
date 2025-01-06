/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:28:39 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/06 11:43:19 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putnbr_positive(int nb);

int	main(void)
{
	char	*result;

	ft_putnbr(-3450);
	return (0);
}

void	ft_putnbr(int nb)
{
	char	symbol;
	char	zero;

	symbol = '-';
	zero = '0';
	if (nb > 0)
		ft_putnbr_positive(nb);
	else if (nb < 0)
	{
		nb = -nb;
		write (1, &symbol, 1);
		ft_putnbr_positive(nb);
	}
	else if (nb == 0)
	{
		write (1, &zero, 1);
	}
}

void	ft_putnbr_positive(int nb)
{
	char	number[1000];
	int		index;

	index = 0;
	while (nb != 0)
	{
		number[index] = nb % 10 + '0';
		nb = nb / 10;
		index++;
	}
	while (index >= 0)
	{
		write (1, &number[index - 1], 1);
		index--;
	}
}
