/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:55:38 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/23 11:04:56 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		size_chars(char *str);
void	mot_conct( char *str1, char *str2);
void	mot_redu(char *str, int nb);
int		size_chars_array(char **str, int size);

int	main(void)
{
	int		size;
	char	*strings[] = {"onsqgqe", "twosf", "three", "four", "five"};
	char	*sep;
	char	*result;

	size = 4;
	sep = ", ";
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
	array = malloc ((size_mots + size * size_sep) * sizeof(char));
	while (index < size)
	{
		mot_conct(array, strs[index]);
		mot_conct(array, sep);
		index++;
	}
	mot_redu(array, size_sep);
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

void	mot_conct(char str[], char *sep)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	while (*sep)
	{
		str[index] = *sep;
		sep++;
		index++;
	}
}

void	mot_redu(char *str, int nb)
{
	int	size;

	size = 0;
	while (*str)
	{
		size++;
		str++;
	}
	str = str - size;
	str[size - nb] = '\0';
}
