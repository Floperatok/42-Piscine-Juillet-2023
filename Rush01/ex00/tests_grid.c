/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:48:00 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/23 22:25:14 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	test_row_left(int *row, char param, int size)
{
	int	i;
	int	counter;
	int	max;

	counter = 1;
	max = row[0];
	i = 1;
	while (i < size)
	{
		if (row[i] > max)
		{
			max = row[i];
			counter++;
		}
		i++;
	}
	if (counter != param - '0')
		return (1);
	return (0);
}

int	test_row_rigth(int *row, char param, int size)
{
	int	i;
	int	counter;
	int	max;

	counter = 1;
	max = row[size - 1];
	i = size - 2;
	while (i >= 0)
	{
		if (row[i] > max)
		{
			max = row[i];
			counter++;
		}
		i--;
	}
	if (counter != param - '0')
		return (1);
	return (0);
}

int	test_col_up(int *grid[], char param, int size, int i)
{
	int	j;
	int	counter;
	int	max;

	counter = 1;
	max = grid[0][i];
	j = 1;
	while (j < size)
	{
		if (grid[j][i] > max)
		{
			max = grid[j][i];
			counter++;
		}
		j++;
	}
	if (counter != param - '0')
		return (1);
	return (0);
}

int	test_col_down(int *grid[], char param, int size, int i)
{
	int	j;
	int	counter;
	int	max;

	counter = 1;
	max = grid[size - 1][i];
	j = size - 2;
	while (j >= 0)
	{
		if (grid[j][i] > max)
		{
			max = grid[j][i];
			counter++;
		}
		j--;
	}
	if (counter != param - '0')
		return (1);
	return (0);
}

int	testgrid(int *grid[], char *params, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (test_row_left(grid[i], params[size * 4 + i * 2], size))
			return (1);
		if (test_row_rigth(grid[i], params[size * 6 + i * 2], size))
			return (1);
		if (test_col_up(grid, params[size * 0 + i * 2], size, i))
			return (1);
		if (test_col_down(grid, params[size * 2 + i * 2], size, i))
			return (1);
		i++;
	}
	return (0);
}
