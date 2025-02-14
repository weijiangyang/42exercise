/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:51:25 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/14 16:03:51 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	*result;

	char words[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";  // Example word
	result = ft_strcapitalize(words);
	printf ("%s", result);
	return (0);
}*/
int is_alphanumeric(char c);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] > 96 && str[i] < 123 )
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (!is_alphanumeric(str[i - 1]) && str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		if (is_alphanumeric(str[i - 1]) && str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return str;
}

int is_alphanumeric(char c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		return 1;
	else
		return 0;
} 
		






















