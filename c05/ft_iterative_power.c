/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:37:05 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/14 10:37:08 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	result;

	result = ft_iterative_power(3, 0);
	printf ("%d\n", result);
	return (0);
}

int	ft_iterative_power(int nb, int power)
{
	int	index;
	int	result;

	result = 1;
	index = 0;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (index < power)
	{
		result *= nb;
		index ++;
	}
	return (result);
}
