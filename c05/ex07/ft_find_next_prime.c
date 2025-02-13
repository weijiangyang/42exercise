/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:08:44 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/13 10:33:52 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	main(void)
{
	int	result;

	result = ft_find_next_prime(-11);
	printf ("%d\n", result);
	return (0);
}*/
int ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	index;

	index = 1;
	if (ft_is_prime(nb))
		return (nb);
	while (index)
	{
		if (ft_is_prime(nb + index))
			return (nb + index);
		index++;
	}
	return 0;
}

int     ft_is_prime(int nb)
{
        int     index;

        index = 2;
        if (nb == 0 || nb == 1|| nb < 0)
                return (0);
        while (index <= nb / 2 || index <= -(nb / 2))
        {
                if (nb % index == 0)
                        return (0);
                index ++;
        }
        return (1);
}
