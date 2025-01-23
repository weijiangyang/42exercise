/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:55:38 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/23 11:35:00 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		size_chars(char *str);
int		size_chars_array(char **str, int size);
void	mot_conct(char array[], char *str, char *sep);

int	main(void)
{
	int		size;
	char	*strings[] = {"onsqgqe", "twosf", "three", "four", "five"};
	char	*sep;
	char	*result;

	size = 4;
	sep = "!!!!!!!!!!!!!!!!!!! ";
	result = ft_strjoin(size, strings, sep);
	printf ("%s\n", result);
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
	int		index;
	int		size_sep;
	int		size_mots;

	if (size == 0)
	{
		array = malloc(1);
		array[0] = '\0';
	}
	index = 0;
	size_sep = size_chars(sep);
	size_mots = size_chars_array(strs, size);
	array = malloc ((size_mots + (size - 1) * size_sep) * sizeof(char));
	while (index < size - 1)
	{
		mot_conct(array, strs[index], sep);
		index++;
	}
	mot_conct(array, strs[index], NULL );
	return (array);
}

int	size_chars(char *str)
{
	int	size;

	size = 0;
	while (*str)
	{
		size++;
		str++;
	}
	str = str - size;
	return (size);
}

int	size_chars_array(char **str, int size)
{
	int	index;
	int	size_mots;

	index = 0;
	size_mots = 0;
	while (index < size)
	{
		size_mots += size_chars(str[index]);
		index++;
	}
	return (size_mots);
}

void	mot_conct(char array[], char *str, char *sep)
{
	int	index;

	index = 0;
	while (array[index])
	{
		index++;
	}
	while (*str)
	{
		array[index] = *str;
		str++;
		index++;
	}
	if (sep != NULL)
	{
		while (*sep)
		{
			array[index] = *sep;
			sep++;
			index++;
		}
	}
}
