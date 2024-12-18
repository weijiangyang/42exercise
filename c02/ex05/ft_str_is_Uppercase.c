/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_Uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:10:35 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/18 11:23:44 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*message;
	int		result;

	message = "HELLOu";
	result = ft_str_is_uppercase(message);
	printf ("%d\n", result);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (*str < 65 || *str > 90)
		{
			flag = 0;
		}
		str++;
	}
	return (flag);
}
