/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:38:15 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/14 11:15:51 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*message;
	int		result;

	message = "hell\n o !";
	result = ft_str_is_printable(message);
	printf("%d\n", result);
	return (0);
}*/

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if ((int)*str < 32 || (int)*str == 127)
			return (0);
		str++;
	}
	return (1);
}
