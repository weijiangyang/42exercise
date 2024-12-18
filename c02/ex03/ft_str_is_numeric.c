/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:58:10 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/18 11:01:13 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*message;
	int		result;

	message = "123abc";
	result = ft_str_is_numeric(message);
	printf ("%d\n", result);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (!isdigit(*str))
		{
			flag = 0;
		}
		str++;
	}
	return (flag);
}
