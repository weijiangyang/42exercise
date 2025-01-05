/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:57:18 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/02 10:41:10 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(char *char1, char *char2)
{
	int		result;

	char1 = "apple";
	char2 = "applehh";
	result = ft_strncmp(char1, char2, 1);
	printf("%d", result);
	return (result);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	result;
	int	compte;

	compte = 1;
	result = 0;
	while ((*s1 || *s2) && compte <= n)
	{
		if (*s1 != *s2)
			return ((int)(*s1 - *s2));
		s1++;
		s2++;
		compte++;
	}
	return (result);
}
