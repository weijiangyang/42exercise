/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:13:06 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/02/11 14:36:39 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// gcc ft_putnbr.c -lm  for using pow 
// gcc -Wall -Wextra -Werror xx.c
void	ft_putnbr(int n);
int		number_digit(int n);
int		ft_pow(int n);

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(atoi(argv[1]));
	//printf ("%d\n", result);
	return (0);
}

void	ft_putnbr(int n)
{
	int		nmofdigit;
	int		digit;
	char	digitenchar;
	char	espace;
	char	sign;

	sign = '-';
	espace = '\n';
	nmofdigit = number_digit(n);
	if (n < 0)
	{
		n = -1 * n;
		write (1, &sign, 1);
	}
	while (nmofdigit > 0)
	{
		digit = n / (int)ft_pow (nmofdigit - 1);
		if (digit != 0)
		{
			digitenchar = digit + '0';
			write (1, &digitenchar, 1);
			n -= digit * (int) ft_pow (nmofdigit - 1);
		}
		else
		{
			digit = n % (int)ft_pow (nmofdigit - 1);
			digitenchar = digit + '0';
			write (1, &digitenchar, 1);
		}
		nmofdigit--;
	}
	write(1, &espace, 1);
}

int	number_digit(int n)
{
	if (n / 10 == 0)
	{
		return (1);
	}
	else
	{
		return (number_digit (n / 10) + 1);
	}
}

int ft_pow(int n)
{
	int result;

	result = 1;
	if (n == 0)
		result = 1;
	if (n > 0)
		result *= ft_pow(n - 1) * 10;
	return result;
}
