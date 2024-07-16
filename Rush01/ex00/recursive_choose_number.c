/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_choose_number.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchukhar <kchukhar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:12:04 by kchukhar          #+#    #+#             */
/*   Updated: 2024/07/07 22:34:06 by kchukhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 12
#include <unistd.h>

void	test_print(char grid[N][N]);
int		check_part_rowl(char grid[N][N], int r, int c);
int		check_part_colu(char grid[N][N], int r, int c);

void	test_print(char grid[N][N])
{
	int	row;
	int	col;

	row = 0;
	while (row < N)
	{
		col = 0;
		while (col < N - 1)
		{
			if (grid[row][col] >= ' ' && grid[row][col] <= '~')
				write(1, &grid[row][col], 1);
			else
				write(1, ".", 1);
			write(1, " ", 1);
			col++;
		}
		if (grid[row][col] > 31 && grid[row][col] < 127)
			write(1, &grid[row][col], 1);
		else
			write(1, ".", 1);
		write(1, "\n", 1);
		row++;
	}
}

void	print_grid(char grid[N][N])
{
	int	row;
	int	col;

	row = 1;
	while (row <= grid[0][0])
	{
		col = 1;
		while (col < grid[0][0])
		{
			if (grid[row][col] >= ' ' && grid[row][col] <= '~')
				write(1, &grid[row][col], 1);
			else
				write(1, ".", 1);
			write(1, " ", 1);
			col++;
		}
		if (grid[row][col] >= ' ' && grid[row][col] <= '~')
			write(1, &grid[row][col], 1);
		else
			write(1, ".", 1);
		write(1, "\n", 1);
		row++;
	}
}

int	partially_valid(char grid[N][N], int row, int col)
{
	if (check_part_rowl(grid, row, col) == 0)
		return (0);
	if (check_part_colu(grid, row, col) == 0)
		return (0);
	return (1);
}

int	choose_num2(char grid[N][N], int row, int col)
{
	char	cand;
	int		next_col;

	next_col = col + 1 - (col >= grid[0][0]) * col;
	cand = '1';
	while (cand <= '0' + grid[0][0])
	{
		grid[row][col] = cand;
		if (partially_valid(grid, row, col))
		{
			if (row == grid[0][0] && col == grid[0][0])
				return (1);
			if (choose_num2(grid, row + (col >= grid[0][0]), next_col))
				return (1);
		}
		cand++;
	}
	return (0);
}
