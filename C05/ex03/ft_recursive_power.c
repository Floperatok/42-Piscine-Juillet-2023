/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:18:38 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/20 13:23:05 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_recursive_power(3, 3));
    printf("%d\n", ft_recursive_power(2, 15));
    printf("%d\n", ft_recursive_power(5, 0));
    printf("%d\n", ft_recursive_power(13, -1));
}*/
