/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:35:55 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/17 11:59:02 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (len(str) == 0)
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	printf("'ab51cd' = %d\n", ft_str_is_numeric("ab51cd"));
	printf("'507813' = %d\n", ft_str_is_numeric("507813"));
	printf("'aBc1D' = %d\n", ft_str_is_numeric("aBc1D"));
	printf("'' = %d\n", ft_str_is_numeric(""));
	return (0);
}*/
