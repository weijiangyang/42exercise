/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:48:49 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/05 14:57:19 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	printf("\n");
	return (0);
}

void	ft_print_numbers(void)
{
	int		n;
	char	target;

	n = 0;
	while (n <= 9)
	{
		target = n + '0';
		write (1, &target, 1);
		n++;
	}
}
