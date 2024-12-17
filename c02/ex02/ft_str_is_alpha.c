/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 22:27:53 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/17 22:33:15 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*message;
	int		result;

	message = "";
	result = ft_str_is_alpha(message);
	printf ("%d\n", result);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	flag;
	int	size;

	size = 0;
	flag = 1;
	while (*str)
	{
		if (*str < 'A' || *str > 'z' || *str > 'Z' && *str < 'a')
		{
			flag = 0;
		}
		str++;
		size++;
	}
	if (!size)
	{
		flag = 1;
	}
	return (flag);
}
