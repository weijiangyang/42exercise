/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:46:43 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/17 11:47:49 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[100];
	char	*src;

	src = "hello world!";
	ft_strcpy(dest, src);
	printf ("%s\n", dest);
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}
