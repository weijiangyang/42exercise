/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:40:48 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/03 22:05:53 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "../ex04/ft_stock_str.h"
#include "../ex04/ft_strs_tab.h"

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

void ft_show_tab(t_stock_str *par)
{
	int i;
	char sign;

	sign = '\n';
	i = 0;
	while (par[i].str != "0")
	{
		put_str(par[i].str);
		write (1, &sign, 1);
		put_nbr(par[i].size);
		write(1, &sign, 1);
		put_str(par[i].copy);
		write(1,&sign, 1);
		i++;
	}
}

int main(void)
{
	int ac;
	char **av;
	t_stock_str *result;

	av = malloc ((ac + 1) * sizeof(char *));
        av[0] = "hello";
        av[1] = "yang";
        av[2] = "jean";
        ac = 3;
        result = ft_strs_to_tab(ac, av);
	ft_show_tab(result);
	free(result);	
	return 0;
}
