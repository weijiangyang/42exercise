/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:31:33 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/02 21:47:40 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	str_size(char *str)
{
	int	size;

	size = 0;
	while (*str)
	{
		size++;
		str++;
	}
	return (size);
}

void	set_stock(t_stock_str *str_stock, char *str)
{
	int		size;
	char	*copy;
	int		index;

	index = 0;
	size = str_size(str);
	copy = malloc ((size + 1) * sizeof(char));
	while (index < size)
	{
		copy[index] = str[index];
		index++;
	}
	str_stock->size = size;
	str_stock->str = str;
	str_stock->copy = copy;
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stocks;
	int			index;

	stocks = malloc ((ac + 1) * sizeof(t_stock_str));
	index = 0;
	while (index < ac)
	{
		set_stock(&stocks[index], av[index]);
		index++;
	}
	set_stock(&stocks[index], "0");
	return (stocks);
}

int	main(void)
{
	int			ac;
	char		**av;
	t_stock_str	*result;
	int			test;

	av = malloc ((ac + 1) * sizeof(char *));
	av[0] = "hello";
	av[1] = "yang";
	av[2] = "jean";
	ac = 3;
	result = ft_strs_to_tab(ac, av);
	free (result);
	printf ("%s\n", result[2].copy);
	return (0);
}
