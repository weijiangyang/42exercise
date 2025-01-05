/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:55:24 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/05 17:55:27 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		result;

	str = "hello";
	result = ft_strlen(str);
	printf("%d", result);
	return (0);
}

int	ft_strlen(char *str)
{
	int	nb;

	nb = 0;
	while (*str)
	{
		nb++;
		str++;
	}
	return (nb);
}
