/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:15:01 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/20 21:21:24 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *s);

int	main(void)
{
	char	*str;

	str = ft_strdup("salut");
	return (0);
}

char	*ft_strdup(char *s)
{
	int		size;
	char	*memory;
	int		i;

	size = 0;
	i = 0;
	while (*s)
	{
		size++;
		s++;
	}
	s = s - size;
	memory = malloc(size * sizeof(char));
	while (i < size)
	{
		memory[i] = *s;
		i++;
		s++;
	}
	return (memory);
}
