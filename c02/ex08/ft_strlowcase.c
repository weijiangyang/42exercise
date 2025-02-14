/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:06:49 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/14 11:56:02 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char	*ft_strlowcase(char *str);

int	main(void)
{
	char	message[6];
	char	*result;

	message[0] = 'H';
	message[1] = 'e';
	message[2] = 'l';
	message[3] = 'l';
	message[4] = 'o';
	result = ft_strlowcase(message);
	printf ("%s\n", message);
	return (0);
}*/

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}
