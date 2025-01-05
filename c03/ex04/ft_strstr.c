/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 21:39:38 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/03 21:42:46 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);
int		ft_strstr_test(char *str, char *to_find);

int	main(void)
{
	char	*str;
	char	*to_find;
	char	*result;

	str = "hello, les gars!";
	to_find = "!";
	result = ft_strstr(str, to_find);
	printf ("%s", result);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		flag;
	char	*copied;
	int		result;

	copied = str;
	while (*str && *to_find)
	{
		if (*to_find == *str)
		{
			result = ft_strstr_test(str, to_find);
			if (result == 0)
				return (copied);
			else
			{
				str++;
			}
		}
		else
			str++;
	}
	return (NULL);
}

int	ft_strstr_test(char *str, char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
			return (1);
		else
		{
			str++;
			to_find++;
		}
	}
	return (0);
}
