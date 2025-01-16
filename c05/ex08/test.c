/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:05:08 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/16 11:27:24 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_safe(int board[10], int col, int row);
void	solve(int board[10], int col, int *count);
int		ft_ten_queens_puzzle(void);
void	print_puzzle(int board[10], int *count);
void	int_to_char(int nb);

int	main(void)
{
	int	result;

	result = ft_ten_queens_puzzle();
	int_to_char(result);
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	result;
	int	board[10];

	result = 0;
	solve(board, 0, &result);
	return (result);
}

int	is_safe(int board[10], int col, int row)
{
	int	pre_col;
	int	pre_row;

	pre_col = 0;
	while (pre_col < col)
	{
		pre_row = board[pre_col];
		if (pre_row == row || pre_row + pre_col == col + row
			|| pre_row - pre_col == row - col)
			return (0);
		pre_col++;
	}
	return (1);
}

void	solve(int board[10], int col, int *count)
{
	char	sign;
	int		row;

	row = 0;
	sign = '\n';
	if (col == 10)
		print_puzzle(board, count);
	while (row < 10)
	{
		if (is_safe(board, col, row))
		{
			board[col] = row;
			solve(board, col + 1, count);
		}
		row++;
	}
}

void	print_puzzle(int board[10], int *count)
{
	int		index;
	char	nb;
	char	sign;

	sign = '\n';
	index = 0;
	while (index < 10)
	{
		nb = board[index] + '0';
		write (1, &nb, 1);
		index++;
	}
	write (1, &sign, 1);
	(*count)++;
}

void	int_to_char(int nb)
{
	char	str[1000];
	int		index;
	char	letter;

	index = 0;
	while (nb != 0)
	{
		str[index] = nb % 10;
		index++;
		nb = nb / 10;
	}
	while (index > 0)
	{
		letter = str[index - 1] + '0';
		write (1, &letter, 1);
		index--;
	}
}
