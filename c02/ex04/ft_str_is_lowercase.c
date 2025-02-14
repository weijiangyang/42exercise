/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:10:35 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/14 10:53:17 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*message;
	int		result;

	message = "ello";
	result = ft_str_is_lowercase(message);
	printf ("%d\n", result);
	return (0);
}*/

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 96 || *str > 122)
			return (0);			
		str++;
	}
	return (1);
}
