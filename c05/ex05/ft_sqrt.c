/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:01:09 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/14 12:01:11 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	result;

	result = ft_sqrt(5);
	printf("%d\n", result);
	return (0);
}

int	ft_sqrt(int nb)
{
	int	result;

	if (nb == 0)
		return (0);
	result = nb * nb;
	return (result);
}
