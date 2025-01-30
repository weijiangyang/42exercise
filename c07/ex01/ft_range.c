/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:48:37 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/30 21:36:23 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*array;

	array = ft_range(2, 15);
	printf ("%p\n", array);
	return (0);
}

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	index;
	int	*test;

	index = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	array = malloc((size + 1) * sizeof(int));
	while (index < size)
	{
		array[index] = min;
		index++;
		min++;
	}
	array[index] = '\0';
	return (array);
}
