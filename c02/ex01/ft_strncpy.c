/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:09:51 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/14 09:58:56 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src;
	char	dest[1000];
	int		index;	

	src = "hello, I am your friend.";
	ft_strncpy(dest, src, 8);
	index = 0;
	while (index < 8)
	{
		printf("%c", dest[index]);
		index++;
	}
	return (0);
}*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
		dest[i] = '\0';
	return (dest);
}
