/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:54:26 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/17 14:43:56 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char *str);

int	main(int argc, char **argv)
{
	int	index;

	index = argc - 1;
	while (index > 0)
	{
		print_char(argv[index]);
		index--;
	}
	return (0);
}

void	print_char(char *str)
{
	char	sign;

	sign = '\n';
	while (*str)
	{
		write (1, &(*str), 1);
		str++;
	}
	write (1, &sign, 1);
}
