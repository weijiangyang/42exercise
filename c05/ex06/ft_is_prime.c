/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 22:28:05 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/14 22:28:09 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	result;

	result = ft_is_prime(134);
	printf ("%d\n", result);
	return (0);
}

int	ft_is_prime(int nb)
{
	int	index;

	index = 2;
	while (index <= nb / 2)
	{
		if (nb % index == 0)
			return (0);
		index ++;
	}
	return (1);
}
