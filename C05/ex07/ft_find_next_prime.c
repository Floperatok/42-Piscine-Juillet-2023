/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:22:16 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/25 17:17:16 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_find_next_prime(0));
    printf("%d\n", ft_find_next_prime(1));
    printf("%d\n", ft_find_next_prime(-1));
    printf("%d\n", ft_find_next_prime(2));
    printf("%d\n", ft_find_next_prime(3));
    printf("%d\n", ft_find_next_prime(4));
    printf("%d\n", ft_find_next_prime(46318738));
}*/
