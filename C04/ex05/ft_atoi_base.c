/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:11:09 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/20 19:56:15 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	test_base(char *base)
{
	int	i;
	int	j;
	int	len_base;

	len_base = len(base);
	if (len_base < 2)
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
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

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	get_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	i;
	int	result;
	int	len_base;

	sign = 1;
	i = 0;
	result = 0;
	len_base = len(base);
	if (test_base(base))
		return (0);
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (is_in_base(str[i], base) && str[i])
	{
		result = result * len_base + get_base_index(str[i], base);
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_atoi_base("2147483647", "0123456789"));
    printf("%d\n", ft_atoi_base("-2147483648", "0123456789"));
    printf("%d\n", ft_atoi_base("  \n\t--+-fdasdfasqwe4", "asdf"));
    printf("%d\n", ft_atoi_base("128", "01"));
    printf("%d\n", ft_atoi_base("=,*;*,=", ";=,*"));
    printf("%d\n", ft_atoi_base("50", "a"));
    printf("%d\n", ft_atoi_base("48965", "01230"));
}*/
