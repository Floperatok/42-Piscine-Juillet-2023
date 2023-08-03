/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:19:02 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/25 13:13:41 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	test_base(char *base)
{
	int	i;
	int	j;

	if (len(base) < 2)
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ' || 
			(base[i] >= 9 && base[i] <= 13))
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	convert_base(long long_nbr, int size_base, char *base)
{
	if (long_nbr >= size_base)
	{
		convert_base(long_nbr / size_base, size_base, base);
		convert_base(long_nbr % size_base, size_base, base);
	}
	else
		ft_putchar(base[long_nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	long_nbr;
	int		size_base;

	long_nbr = nbr;
	size_base = len(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		long_nbr *= -1;
	}
	if (test_base(base))
		return ;
	convert_base(long_nbr, size_base, base);
}
/*
int	main()
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
	return (0);
}*/
