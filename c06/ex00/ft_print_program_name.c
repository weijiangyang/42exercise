/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 22:15:13 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/16 22:16:13 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char *str);

int	main(int argc, char **argv)
{
	print_char(argv[0]);
	return (0);
}

void	print_char(char *str)
{
	while (*str)
	{
		write (1, &(*str), 1);
		str++;
	}
}
