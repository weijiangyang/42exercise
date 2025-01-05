/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:51:25 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/19 22:35:06 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	*result;

	char words[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";  // Example word
	result = ft_strcapitalize(words);
	printf ("%s", result);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		non_capitalized;
	char	*original;

	original = str;
	non_capitalized = 1;
	while (*str)
	{
		if (isalnum(*str))
		{
			if ((non_capitalized && !isalpha(*str)) || 
			  (non_capitalized && isalpha(*str) && islower(*str)))
			{
				*str = toupper(*str);				
				non_capitalized = 0;
			}
			else if (!non_capitalized && isalpha(*str) && isupper(*str))
				*str = tolower(*str);	
		}
		else	
			non_capitalized = 1;
		str++;
	}
	return (original);
}
