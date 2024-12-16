/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:50:29 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/16 21:34:46 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	index;
	int	count;
	int	numbers[5];

	index = 0;
	numbers[0] = -12;
	numbers[1] = 25;
	numbers[2] = 35;
	numbers[3] = 45;
	numbers[4] = 58;
	count = sizeof(numbers) / sizeof(int);
	ft_rev_int_tab(numbers, count);
	while (index < count)
	{
		printf("%d ", numbers[index]);
		index++;
	}
	return (0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	while (index < size / 2)
	{
		temp = tab[index];
		tab[index] = tab[size - index - 1];
		tab[size - index - 1] = temp;
		index ++;
	}
}
