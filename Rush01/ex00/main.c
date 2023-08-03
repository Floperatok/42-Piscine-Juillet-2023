/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:22:04 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/23 23:41:08 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *str);

void	printgrid(int **tab, int size);

void	putstr(char *str);

int		test_grid(int *grid[], char *params, int size);

int	**init_grid(int size)
{
	int	**grid;
	int	i;
	int	j;

	grid = (int **)malloc(size * sizeof(int *));
	i = 0;
	while (i < size)
	{
		grid[i] = (int *)malloc(size * sizeof(int));
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

int	is_safe(int **grid, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4) 
	{
		if (grid[row][i] == num || grid[i][col] == num) 
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	solve_helper(int **grid, char *params, int row, int col)
{
	int	num;
	int	next_row;
	int	next_col;

	num = 1;
	while (num <= 4) 
	{
		if (grid[row][col] == 0 && is_safe(grid, row, col, num)) 
		{
			grid[row][col] = num;
			next_row = row;
			next_col = col + 1;
			if (next_col == 4) 
			{
				next_row = row + 1;
				next_col = 0;
			}
			if (solve(grid, params, next_row, next_col)) 
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0); 
}

int	solve(int **grid, char *params, int row, int col)
{
	int	size;

	size = (len(params) + 1) / 8;
	while (row < size) 
	{
		if (col == size) 
		{
			row++;
			col = 0;
		}
		if (grid[row][col] != 0) 
		{
			col++;
			continue ;
		}
		if (solve_helper(grid, params, row, col)) 
		{
			return (1); 
		}
		return (0);
	}
}

int	main(int argc, char *argv[])
{
	int	size;
	int	**grid;
	int	i;

	i = 0;
	size = 4;
	while (argv[1][i])
		i++;
	if (argc != 2 || i != size * 8 - 1)
	{
		putstr("error arguments");
		return (0);
	}
	grid = init_grid(size);
	solve(grid, argv[1], 0, 0);
	free(grid);
	return (0);
}
