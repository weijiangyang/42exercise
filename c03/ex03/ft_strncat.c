/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:37:00 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/03 15:42:51 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[100] = "Hello, ";
	char	*src;
	char	*result;

	src = "les gars!";
	result = ft_strncat(dest, src, 5);
	printf ("%s", result);
	return (0);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	while (dest[index])
	{
		index++;
	}
	while (src[i] && i <= nb - 1)
	{
		dest[index] = src[i];
		index++;
		i++;
	}
	if (i == nb)
		dest[index] = '\0';
	return (dest);
}
