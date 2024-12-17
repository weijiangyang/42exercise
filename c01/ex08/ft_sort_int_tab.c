/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:49:15 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/17 10:57:47 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int	numbers[6];
	int	index;

	numbers[0] = 15;
	numbers[1] = 8;
	numbers[2] = 2;
	numbers[3] = 13;
	numbers[4] = 135;
	numbers[5] = 11;
	index = 0;
	size = sizeof(numbers) / sizeof(int);
	ft_sort_int_tab(numbers, size);
	while (index < size)
	{
		printf ("%d ", numbers[index]);
		index++;
	}
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	jndex;
	int	temp;

	index = 0;
	jndex = 1;
	while (index < size - 1)
	{
		while (jndex < size)
		{
			if (tab[index] > tab[jndex])
			{
				temp = tab[index];
				tab[index] = tab[jndex];
				tab[jndex] = temp;
			}
			jndex++;
		}
		index ++;
		jndex = index + 1;
	}
}
