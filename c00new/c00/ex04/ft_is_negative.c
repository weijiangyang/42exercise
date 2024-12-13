/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:05:12 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/05 15:05:15 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(10);
	printf("\n");
	return (0);
}

void	ft_is_negative(int n)
{
	char	flag_positive;
	char	flag_negative;

	flag_positive = 'P';
	flag_negative = 'N';
	if (n >= 0)
	{
		write (1, &flag_positive, 1);
	}
	else
	{
		write (1, &flag_negative, 1);
	}
}
