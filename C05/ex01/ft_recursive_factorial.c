/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:03:15 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/20 13:09:40 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_factorial(5));
    printf("%d\n", ft_recursive_factorial(-5));
    printf("%d\n", ft_recursive_factorial(0));
    printf("%d\n", ft_recursive_factorial(15));
}*/
