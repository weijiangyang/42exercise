/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:54:42 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/13 22:18:19 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long long	ft_iterative_factorial(int nb);

int	main(void)
{
	int	result;

	result = ft_iterative_factorial(120);
	printf ("%d", result);
	return (0);
}

long long	ft_iterative_factorial(int nb)
{
	long long	result;
	int			index;

	index = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (index <= nb)
	{
		result *= index;
		index++;
	}
	return (result);
}
