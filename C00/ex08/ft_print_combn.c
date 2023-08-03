/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 00:05:34 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/15 19:22:33 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	increment_array(char *array, int n)
{
	int		i;

	i = n - 1;
	while (i >= 0)
	{
		if (array[i] >= '9')
		{
			array[i] = '0';
			i--;
		}
		else
		{
			array[i]++;
			break ;
		}
	}
}

int	is_printable(char *array, int n)
{
	int		i;

	i = 0;
	while (i < n - 1)
	{
		if (array[i] >= array[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	initarray(char *array, int n)
{
	int		i;

	i = 0;
	while (i < n - 1)
	{
		array[i + 1] = array[i] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	array[10];
	int		done;

	if (n < 1 || n > 10)
		return ;
	*array = '0';
	done = 0;
	initarray(array, n);
	while (done == 0)
	{
		if (is_printable(array, n))
		{
			write(1, array, n);
			if (*array != 58 - n)
				write(1, ", ", 2);
			else
				done = 1;
		}
		increment_array(array, n);
	}
}
/*
int		main(void)
{
	ft_print_combn(1);
	write(1, "\n", 1);
	ft_print_combn(2);
	write(1, "\n", 1);
    ft_print_combn(3);
    write(1, "\n", 1);
	ft_print_combn(4);
    write(1, "\n", 1);
    ft_print_combn(5);
    write(1, "\n", 1);
    ft_print_combn(6);
    write(1, "\n", 1);
    ft_print_combn(7);
    write(1, "\n", 1);
    ft_print_combn(8);
    write(1, "\n", 1);
    ft_print_combn(9);
    write(1, "\n", 1);
    ft_print_combn(10);
    return (0);
}*/
