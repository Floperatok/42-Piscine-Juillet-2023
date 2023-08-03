/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:59:58 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/17 12:03:23 by nsalles          ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (len(str) == 0)
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	printf("'abcd' = %d\n", ft_str_is_uppercase("abcd"));
	printf("'ABcdEF' = %d\n", ft_str_is_uppercase("ABcdEF"));
	printf("'aBc1D' = %d\n", ft_str_is_uppercase("aBc1D"));
	printf("'SALUT' = %d\n", ft_str_is_uppercase("SALUT"));
	printf("'SALUt' = %d\n", ft_str_is_uppercase("SALUt"));
	printf("'' = %d\n", ft_str_is_uppercase(""));
	return (0);
}*/
