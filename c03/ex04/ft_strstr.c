/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 21:39:38 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/16 21:09:51 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
				j++;
			else
				break ;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}

