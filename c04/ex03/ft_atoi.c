/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 22:08:43 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/07 16:20:50 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_atoi(char *str);
int		is_digit(char letter);
int		is_negative(char *str);

int	main(void)
{
	char	*result;

	result = ft_atoi("- ---+--+1234ab567");
	printf ("%s", result);
	return (0);
}

char	*ft_atoi(char *str)
{
	char	dest[1000];
	int		index;
	char	*copied;

	copied = dest;
	index = 0;
	if (is_negative(str))
	{
		dest[0] = '-';
		index++;
	}
	while (!is_digit(*str))
		str++;
	while (is_digit(*str))
	{
		dest[index] = *str;
		str++;
		index++;
	}
	dest[index] = '\0';
	return (copied);
}

int	is_digit(char letter)
{
	char	*nbs;

	nbs = "0123456789";
	while (*nbs)
	{
		if (*nbs == letter)
			return (1);
		nbs++;
	}
	return (0);
}

int	is_negative(char *str)
{
	int	compte;

	compte = 0;
	while (*str == ' ' || *str == '+' || *str == '-')
	{
		if (*str == '-')
			compte++;
		str++;
	}
	if (compte % 2)
		return (1);
	else
		return (0);
}
