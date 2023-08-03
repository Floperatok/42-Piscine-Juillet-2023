/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:24:04 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/20 13:30:57 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index <= 2)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_fibonacci(5));
    printf("%d\n", ft_fibonacci(0));
    printf("%d\n", ft_fibonacci(1));
    printf("%d\n", ft_fibonacci(2));
    printf("%d\n", ft_fibonacci(15));
    printf("%d\n", ft_fibonacci(-2));
}*/
