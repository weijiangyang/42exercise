/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:06:49 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/18 22:08:19 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	message[6];
	char	*result;

	message[0] = 'h';
	message[1] = 'e';
	message[2] = 'l';
	message[3] = 'l';
	message[4] = 'o';
	result = ft_strupcase(message);
	printf ("%s\n", message);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		*str = toupper(*str);
		str++;
		count++;
	}
	return (str - count);
}
