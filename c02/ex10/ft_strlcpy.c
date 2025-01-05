/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:30:12 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/20 16:43:21 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*source = "Salut, good morning!";
	int		result;
	char	dest[8];

	result = ft_strlcpy(dest, source, sizeof(dest));
	printf ("%d\n", result);
	return (0);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (*src)
	{
		if (size && index < size)
		{
			*dest = *src;
			index++;
			dest++;
		}
		src++;
		count++;
	}
	return (count);
}
