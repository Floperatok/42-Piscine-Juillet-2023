/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 22:48:59 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/19 16:17:02 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
/*
int	main()
{
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(4651);
    ft_putchar('\n');
	ft_putnbr(-42);
    ft_putchar('\n');
	ft_putnbr(-2147483648);
    ft_putchar('\n');
    ft_putnbr(2147483647);
    ft_putchar('\n');
	return (0);
}*/
