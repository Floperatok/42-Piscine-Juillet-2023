/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:57:28 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/24 17:07:23 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid(int *tab, int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (tab[i] == row)
			return (0);
		if (tab[i] - row == col - i || row - tab[i] == col - i)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printpuzzle(int *tab)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
	ft_putchar('\n');
}

int	solve(int *tab, int col, int count)
{
	int	row;

	if (col == 10)
	{
		printpuzzle(tab);
		return (count + 1);
	}
	row = 0;
	while (row < 10)
	{
		if (is_valid(tab, col, row))
		{
			tab[col] = row;
			count = solve(tab, col + 1, count);
			tab[col] = 0;
		}
		row++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		tab[i] = 0;
		i++;
	}
	return (solve(tab, 0, 0));
}

/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_ten_queens_puzzle());
	return (0);
}*/
