/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:58:10 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/14 10:31:55 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*message;
	int		result;

	message = "";
	result = ft_str_is_numeric(message);
	printf ("%d\n", result);
	return (0);
}*/

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < 48 || *str > 57)
			return (0);	
		str++;
	}
	return (1);
}
