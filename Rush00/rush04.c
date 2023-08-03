/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:41:13 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/16 12:21:23 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	swap(char *c)
{
	if (*c == 65)
		*c = 67;
	else
		*c = 65;
}

void	choose_print(int i, int j, int x, int y, char *c)
{
	if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
	{
		ft_putchar(*c);
		swap(c);
	}
	else if (i != 0 && i != y - 1 && j != 0 && j != x - 1)
		ft_putchar(32);
	else
		ft_putchar(66);
}

void	rush(int x, int y)
{
	int		i;
	int		j;
	char	c;

	c = 65;
	i = 0;
	while (i < y)
	{
		if (i == y - 1)
			swap(&c);
		j = 0;
		while (j < x)
		{
			choose_print(i, j, x, y, &c);
			j++;
		}
		ft_putchar(10);
		i++;
	}
}
