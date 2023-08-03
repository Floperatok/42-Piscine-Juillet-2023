/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:55:42 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/14 02:13:32 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		while (j <= 99)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
			write (1, " ", 1);
			ft_putchar(j / 10 + 48);
			ft_putchar(j % 10 + 48);
			if (i != 98)
			{
				write (1, ",", 1);
				write (1, " ", 1);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
/*
int	 main()
{
	ft_print_comb2();
	return (0);
}
*/
