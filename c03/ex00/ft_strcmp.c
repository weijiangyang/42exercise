/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:57:18 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/02 10:17:22 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(char *char1, char *char2)
{
	int		result;

	char1 = "apple";
	char2 = "applehh";
	result = ft_strcmp(char1, char2);
	printf("%d", result);
	return (result);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	result = 0;
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return ((int)(*s1 - *s2));
		s1++;
		s2++;
	}
	return (result);
}
