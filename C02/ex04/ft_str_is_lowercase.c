/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:49:38 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/17 11:55:48 by nsalles          ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (len(str) == 0)
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	printf("'abcd' = %d\n", ft_str_is_lowercase("abcd"));
	printf("'ABcdEF' = %d\n", ft_str_is_lowercase("ABcdEF"));
	printf("'aBc1D' = %d\n", ft_str_is_lowercase("aBc1D"));
	printf("'' = %d\n", ft_str_is_lowercase(""));
	return (0);
}*/
