/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 23:06:22 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/20 23:11:40 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	write_letter_as_hex(char letter);
int		is_print(char letter);

int	main(void)
{
	char	*message;

	message = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(message);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	char	slash;

	slash = '\\';
	while (*str)
	{
		if (is_print(*str))
			write (1, str, 1);
		else
		{
			write (1, &slash, 1);
			write_letter_as_hex(*str);
		}
		str++;
	}
}

void	write_letter_as_hex(char letter)
{
	int		letterinprint[2];
	char	output[2];

	letterinprint[0] = (int)letter / 16;
	letterinprint[1] = (int)letter % 16;
	output[0] = "0123456789abcdef"[letterinprint[0]];
	output[1] = "0123456789abcdef"[letterinprint[1]];
	write (1, output, 2);
}

int	is_print(char letter)
{
	if (letter < 127 && letter > 31)
	{
		return (1);
	}
	return (0);
}
