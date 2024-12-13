/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:06:08 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/05 16:23:22 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void);
void	print_digits(int start_digit, int second_digit, int third_digit);

int	main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_print_comb(void)
{
	int	start_digit;
	int	second_digit;
	int	third_digit;

	start_digit = 0;
	second_digit = 1;
	third_digit = 2;
	while (start_digit <= 7)
	{
		while (second_digit <= 8)
		{
			while (third_digit <= 9)
			{
				print_digits(start_digit, second_digit, third_digit);
				third_digit += 1;
			}
			second_digit += 1;
			third_digit = second_digit + 1;
		}
		start_digit += 1;
		second_digit = start_digit + 1;
		third_digit = second_digit + 1;
	}
}

void	print_digits(int start_digit, int second_digit, int third_digit)
{
	char	start_digit_char;
	char	second_digit_char;
	char	third_digit_char;

	start_digit_char = start_digit + '0';
	second_digit_char = second_digit + '0';
	third_digit_char = third_digit + '0';
	write (1, &start_digit_char, 1);
	write (1, &second_digit_char, 1);
	write (1, &third_digit_char, 1);
	write (1, ", ", 2);
}
