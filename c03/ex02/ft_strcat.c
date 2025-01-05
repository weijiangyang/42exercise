/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:55:28 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/02 16:20:29 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[10] = "hello,";
	char	*src;
	char	*result;

	src = " les gars!";
	result = ft_strcat(dest, src);
	printf ("%s", result);
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	while (dest[index])
		index++;
	while (src[i])
	{
		dest[index] = src[i];
		index++;
		i++;
	}
	dest[index] = '\0';
	return (dest);
}
