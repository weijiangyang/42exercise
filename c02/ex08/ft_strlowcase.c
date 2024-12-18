/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:06:49 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/18 22:13:50 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	message[6];
	char	*result;

	message[0] = 'H';
	message[1] = 'e';
	message[2] = 'l';
	message[3] = 'l';
	message[4] = 'o';
	result = ft_strlowcase(message);
	printf ("%s\n", message);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		*str = tolower(*str);
		str++;
		count++;
	}
	return (str - count);
}
