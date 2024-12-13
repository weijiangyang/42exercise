/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:22:06 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/10 10:36:11 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ft(int nbr);

int	main(void)
{
	ft_ft(10);
	return (0);
}

void	ft_ft(int nbr)
{
	*&nbr = 42;
	printf("%d\n", nbr);
}
