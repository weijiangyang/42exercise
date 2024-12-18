/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:38:15 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/18 11:39:01 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*message;
	int		result;

	message = "hell\n o !";
	result = ft_str_is_printable(message);
	printf("%d\n", result);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (!isprint(*str))
		{
			flag = 0;
		}
		str++;
	}
	return (flag);
}
