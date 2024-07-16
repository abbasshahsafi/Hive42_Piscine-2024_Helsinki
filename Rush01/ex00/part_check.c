/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <ashahsaf@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:55:33 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/07 22:34:09 by kchukhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 12
#include <unistd.h>

int	check_row_right(char grid[N][N], int row);
int	check_col_down(char grid[N][N], int col);

int	check_part_rowr(char grid[N][N], int r, int c)
{
	int	i;
	int	diff;

	if (c == grid[0][0])
		return (check_row_right(grid, r) + '0' == grid[r][grid[0][0] + 1]);
	diff = grid[0][0] - c - 1;
	i = grid[0][0];
	while (i && ((grid[N - 1][N - 1] >> (i - 1)) & 1))
		i--;
	grid[N - 1][N - 2] = i + '0';
	grid[N - 2][N - 1] = '1';
	while (c >= 1)
	{
		if (grid[r][c] > grid[N - 1][N - 2])
		{
			grid[N - 1][N - 2] = grid[r][c];
			grid[N - 2][N - 1]++;
		}
		c--;
	}
	if (grid[N - 2][N - 1] > grid[r][grid[0][0] + 1] || diff + grid[N - 2]
			[N - 1] < grid[r][grid[0][0] + 1])
		return (0);
	return (1);
}

//grd[N-1][N-1]=used;[-1][-2]=max_seen;[-2][-1]=count;
int	check_part_rowl(char g[N][N], int r, int c)
{
	int	col;

	col = 1;
	g[N - 1][N - 1] = 0;
	g[N - 1][N - 2] = '0';
	g[N - 2][N - 1] = '0';
	while (col <= c)
	{
		if ((g[N - 1][N - 1] >> (g[r][col] - '1')) & 1)
			return (0);
		g[N - 1][N - 1] |= (1 << (g[r][col] - '1'));
		if (g[r][col] > g[N - 1][N - 2])
		{
			g[N - 1][N - 2] = g[r][col];
			g[N - 2][N - 1]++;
		}
		col++;
	}
	if (g[N - 2][N - 1] + (g[N - 1][N - 2] - '0' < g[0][0]) > g[r][0]
			|| g[N - 2][N - 1] + g[0][0] - g[N - 1][N - 2] + '0' < g[r][0])
		return (0);
	if (check_part_rowr(g, r, c) == 0)
		return (0);
	return (1);
}

int	check_part_cold(char grid[N][N], int r, int c)
{
	int	i;
	int	diff;

	if (r == grid[0][0])
		return (check_col_down(grid, c) + '0' == grid[grid[0][0] + 1][c]);
	diff = grid[0][0] - r - 1;
	i = grid[0][0];
	while (i && ((grid[N - 1][N - 1] >> (i - 1)) & 1))
		i--;
	grid[N - 1][N - 2] = i + '0';
	grid[N - 2][N - 1] = '1';
	while (r >= 1)
	{
		if (grid[r][c] > grid[N - 1][N - 2])
		{
			grid[N - 1][N - 2] = grid[r][c];
			grid[N - 2][N - 1]++;
		}
		r--;
	}
	if (grid[N - 2][N - 1] > grid[grid[0][0] + 1][c] || diff + grid[N - 2]
			[N - 1] < grid[grid[0][0] + 1][c])
		return (0);
	return (1);
}

//g(rid)[N-1][N-1]=used;[-1][-2]=max_seen;[-2][-1]=count;
int	check_part_colu(char g[N][N], int r, int c)
{
	int		row;

	row = 1;
	g[N - 1][N - 1] = 0;
	g[N - 1][N - 2] = '0';
	g[N - 2][N - 1] = '0';
	while (row <= r)
	{
		if ((g[N - 1][N - 1] >> (g[row][c] - '1')) & 1)
			return (0);
		g[N - 1][N - 1] |= (1 << (g[row][c] - '1'));
		if (g[row][c] > g[N - 1][N - 2])
		{
			g[N - 1][N - 2] = g[row][c];
			g[N - 2][N - 1]++;
		}
		row++;
	}
	if (g[N - 2][N - 1] + (g[N - 1][N - 2] - '0' < g[0][0]) > g[0][c]
			|| g[N - 2][N - 1] + g[0][0] - g[N - 1][N - 2] + '0' < g[0][c])
		return (0);
	if (check_part_cold(g, r, c) == 0)
		return (0);
	return (1);
}
