/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:49:24 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/19 16:05:35 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32);
}

int	ft_atoi(char *str)
{
	int	resultat;
	int	sign;
	int	i;
	int	nb_sign;

	resultat = 0;
	sign = 1;
	i = 0;
	nb_sign = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + (str[i] - '0');
		i++;
	}
	return (resultat * sign);
}
/*
// main fonctionne
#include <stdio.h>
int main()
{
	printf("test1 = %d\n", ft_atoi("    ---+-+-132458awef7"));
	printf("test2 = %d\n", ft_atoi("  	\n "));
    printf("test3 = %d\n", ft_atoi(""));
    printf("test4 = %d\n", ft_atoi("   --++-as-+156"));
    printf("test5 = %d\n", ft_atoi("  -+-45-+8"));
}*/
