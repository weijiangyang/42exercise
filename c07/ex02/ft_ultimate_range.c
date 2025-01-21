/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:02:34 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/21 11:03:09 by weijiangyang     ###   ########.fr       */
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

	ft_ultimate_range(range, 2, 12);
	printf ("%d\n", *(range[4]));
	return (0);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	index;
	int	i;
	int	size;

	index = 0;
	i = 0;
	size = max - min;
	array = malloc(size * sizeof(int));
	while (index < size)
	{
		array[index] = min;
		index++;
		min++;
	}
	while (i < size)
	{
		range[i] = &array[i];
		i++;
	}
	free (array);
}
