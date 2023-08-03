/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:12:05 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/20 13:17:39 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power --;
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_power(3, 3));
    printf("%d\n", ft_iterative_power(2, 15));
    printf("%d\n", ft_iterative_power(5, 0));
    printf("%d\n", ft_iterative_power(13, -1));
}*/
