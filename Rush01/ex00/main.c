/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <ashahsaf@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:59:22 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/07 23:25:43 by kchukhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 12
#include <unistd.h>

int		choose_num2(char grid[N][N], int row, int col);
void	print_grid(char grid[N][N]);
int		isnum(char c);

int	lengrid(char *conds)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (conds[i])
	{
		if (isnum(conds[i]) && (i == 0 || conds[i - 1] == ' '))
			count++;
		else if (!isnum(conds[i]) && conds[i] != ' ')
			return (0);
		else if (isnum(conds[i - 1]) && isnum(conds[i]))
			return (0);
		i++;
	}
	return (count);
}

void	write_conditions(char grid[N][N], char *conds)
{
	int	i;
	int	nums;

	i = 0;
	nums = 1;
	while (nums <= grid[0][0] && conds[i])
	{
		if (isnum(conds[i]))
			grid[grid[0][0] + 1][nums++] = conds[i];
		i++;
	}
	nums = 1;
	while (nums <= grid[0][0] && conds[i])
	{
		if (isnum(conds[i]))
			grid[nums++][0] = conds[i];
		i++;
	}
	nums = 1;
	while (nums <= grid[0][0] && conds[i])
	{
		if (isnum(conds[i]))
			grid[nums++][grid[0][0] + 1] = conds[i];
		i++;
	}
}

void	prepare_duplicate_checker(char grid[N][N], char *conditions)
{
	int	i;
	int	nums;

	i = 1;
	while (i <= grid[0][0])
	{
		grid[N - 1][i] = 0;
		grid[i][N - 1] = 0;
		i++;
	}
	i = 0;
	nums = 1;
	while (nums <= grid[0][0] && conditions[i])
	{
		if (isnum(conditions[i]))
			grid[0][nums++] = conditions[i];
		i++;
	}
	write_conditions(grid, &conditions[i]);
}

int	main(int argc, char *argv[])
{
	char	grid[N][N];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	grid[0][0] = lengrid(argv[1]);
	if (grid[0][0] % 4 != 0 || grid[0][0] / 4 < 1 || grid[0][0] / 4 > 7)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	grid[0][0] /= 4;
	prepare_duplicate_checker(grid, argv[1]);
	if (choose_num2(grid, 1, 1))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	return (0);
}
