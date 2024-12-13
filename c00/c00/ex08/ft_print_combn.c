/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 22:47:47 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/06 10:09:44 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_combination(int arr[], int size);
void	generate(int arr[], int size, int start_digit, int depth);
void	ft_print_combn(int n);

int	main(void)
{
	ft_print_combn(4);
	write (1, "\n", 1);
	return (0);
}

void	ft_print_combn(int n)
{
	int	arr[9];

	generate(arr, n, 1, 0);
}

void	print_combination(int arr[], int size)
{
	int		i;
	char	digit;

	i = 0;
	while (i < size)
	{
		digit = arr[i] + '0';
		write(1, &digit, 1);
		i++;
	}
	write(1, ", ", 2);
}

void	generate(int arr[], int size, int start_digit, int depth)
{
	int	digit;

	if (depth == size)
	{
		print_combination(arr, size);
		return ;
	}
	digit = start_digit;
	while (digit <= 10 - (size - depth))
	{
		arr[depth] = digit;
		generate(arr, size, digit + 1, depth + 1);
		digit ++;
	}
}
