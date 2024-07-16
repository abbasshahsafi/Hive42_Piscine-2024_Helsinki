/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <ashahsaf@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:55:33 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/07 22:34:27 by kchukhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 12

int	check_row_left(char grid[N][N], int row)
{
	char	max_seen;
	int		col;
	int		count;

	max_seen = 0;
	col = 1;
	count = 0;
	while (col <= grid[0][0])
	{
		if (grid[row][col] > max_seen)
		{
			max_seen = grid[row][col];
			count++;
		}
		col++;
	}
	return (count);
}

int	check_row_right(char grid[N][N], int row)
{
	char	max_seen;
	int		col;
	int		count;

	max_seen = 0;
	col = grid[0][0];
	count = 0;
	while (col >= 1)
	{
		if (grid[row][col] > max_seen)
		{
			max_seen = grid[row][col];
			count++;
		}
		col--;
	}
	return (count);
}

int	check_col_up(char grid[N][N], int col)
{
	char	max_seen;
	int		row;
	int		count;

	max_seen = 0;
	row = 1;
	count = 0;
	while (row <= grid[0][0])
	{
		if (grid[row][col] > max_seen)
		{
			max_seen = grid[row][col];
			count++;
		}
		row++;
	}
	return (count);
}

int	check_col_down(char grid[N][N], int col)
{
	char	max_seen;
	int		row;
	int		count;

	max_seen = 0;
	row = grid[0][0];
	count = 0;
	while (row >= 1)
	{
		if (grid[row][col] > max_seen)
		{
			max_seen = grid[row][col];
			count++;
		}
		row--;
	}
	return (count);
}
