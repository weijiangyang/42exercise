/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 22:27:53 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/14 10:13:25 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*message;
	int		result;

	message = "";
	result = ft_str_is_alpha(message);
	printf ("%d\n", result);
	return (0);
}*/

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'z' || (*str > 'Z' && *str < 'a'))
			return (0);
		str++;
	}
	return (1);
}
