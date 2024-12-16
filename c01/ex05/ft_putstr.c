/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 22:24:19 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/13 22:26:29 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "hello, world!";
	ft_putstr(str);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str ++;
	}
}
