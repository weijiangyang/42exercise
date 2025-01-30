/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:02:34 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/30 22:10:02 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	**range;
	int	min;
	int	max;
	int	size;

	size = ft_ultimate_range(range, 2, 12);
	printf ("%d\n", *range[2]);
	return (0);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	index;
	int	i;
	int	size;

	size = max - min;
	index = 0;
	i = 0;
	if (!size)
	{
		range = NULL;
		return (0);
	}
	array = malloc((size + 1) * sizeof(int));
	if (array == NULL)
		return (-1);
	while (index < size)
	{
		array[index] = min;
		range[index] = &array[index];
		index++;
		min++;
	}
	return (size);
}
