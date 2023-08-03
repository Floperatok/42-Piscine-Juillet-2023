/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:49:13 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/20 13:11:00 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb >= 0)
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_factorial(5));
    printf("%d\n", ft_iterative_factorial(-5));
    printf("%d\n", ft_iterative_factorial(0));
    printf("%d\n", ft_iterative_factorial(15));
}*/
