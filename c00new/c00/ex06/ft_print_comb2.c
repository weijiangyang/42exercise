/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:46:26 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/05 17:01:31 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb2(void);
void	num_to_char(int n);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_print_comb2(void)
{
	int		n;
	int		m;
	char	espace;

	n = 0;
	m = 1;
	espace = ' ';
	while (n < 99)
	{
		while (m < 100)
		{
			num_to_char(n);
			write(1, &espace, 1);
			num_to_char(m);
			write(1, ", ", 2);
			m++;
		}
		n++;
		m = n + 1;
	}
}

void	num_to_char(int n)
{
	char	charnumber[2];
	int		firstnumber;
	int		secondnumber;

	charnumber[2] = 0;
	firstnumber = n / 10;
	secondnumber = n % 10;
	charnumber[0] = firstnumber + '0';
	charnumber[1] = secondnumber + '0';
	write (1, &charnumber[0], 1);
	write (1, &charnumber[1], 1);
}
