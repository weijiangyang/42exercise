/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:13:06 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/05 21:30:24 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <math.h>
// gcc ft_putnbr.c -lm  for using pow 
// gcc -Wall -Wextra -Werror xx.c
void	ft_putnbr(int n);
int		number_digit(int n);

int	main(void)
{
	ft_putnbr(42);
	return (0);
}

void	ft_putnbr(int n)
{
	int		nmofdigit;
	int		digit;
	char	digitenchar;
	char	espace;

	espace = '\n';
	nmofdigit = number_digit(n);
	while (nmofdigit > 0)
	{
		digit = n / (int)pow (10, nmofdigit - 1);
		if (digit != 0)
		{
			digitenchar = digit + '0';
			write (1, &digitenchar, 1);
			n -= digit * (int) pow(10, nmofdigit - 1);
		}
		else
		{
			digit = n % (int)pow(10, nmofdigit - 1);
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
