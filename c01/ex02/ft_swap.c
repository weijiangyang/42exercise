/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:22:25 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/12 11:32:47 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	nmb1;
	int	nmb2;

	nmb1 = 2;
	nmb2 = 3;
	printf ("Before swap: nmb1 = %d, nmb2 = %d\n", nmb1, nmb2);
	ft_swap(&nmb1, &nmb2);
	printf("After swap: nmb1 = %d, nmb2 = %d\n", nmb1, nmb2);
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int	nma;

	nma = *a;
	*a = *b;
	*b = nma;
}
