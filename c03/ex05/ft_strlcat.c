/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:57:16 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/05 17:37:48 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[20] = "hello";
	char	*src;
	int		result;

	src = "les gars!";
	result = ft_strlcat(dest, src, 12);
	printf("%d", result);
	return (0);
}

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	compte;

	compte = 0;
	while (*dest)
	{
		compte++;
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		compte++;
		dest++;
		src++;
	}
	return (compte);
}
