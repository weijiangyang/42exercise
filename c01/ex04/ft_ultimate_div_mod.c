/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 21:37:37 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/13 12:06:36 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	x;
	int	y;	

	x = 10;
	y = 3;
	printf ("Before: x = %d, y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf ("After: x = %d, y = %d\n", x, y);
	return (0);
}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (b != NULL && *b != 0)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}
