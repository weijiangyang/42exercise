/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:38:35 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/20 16:43:06 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_cmp(char *str1, char *str2);
void	sort_arguments(int count, char *args[]);
void	write_str(char *str);

int	main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	int		result;
	int		index;
	int		j;

	index = 1;
	sort_arguments(argc, argv);
	while (index < argc)
	{
		write_str(argv[index]);
		index++;
	}
	return (0);
}

int	ft_str_cmp(char *str1, char *str2)
{
	int	result;
	int	index;

	while (*str1 || *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		else
		{
			str1++;
			str2++;
		}
	}
	return (0);
}

void	sort_arguments(int count, char *args[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < count - 1)
	{
		j = i + 1;
		while (j < count)
		{
			if (ft_str_cmp(args[i], args[j]) > 0)
			{
				temp = args[i];
				args[i] = args[j];
				args[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	write_str(char *str)
{
	char	espace;

	espace = ' ';
	while (*str)
	{
		write (1, &*str, 1);
		str++;
	}
	write (1, &espace, 1);
}
