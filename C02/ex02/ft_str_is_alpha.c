/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:03:48 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/17 11:36:56 by nsalles          ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (len(str) == 0)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') 
				|| (str[i] >= 'A' && str[i] <= 'Z')))
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
	printf("'abcd' = %d\n", ft_str_is_alpha("abcd"));
	printf("'ABcdEF' = %d\n", ft_str_is_alpha("ABcdEF"));
	printf("'aBc1D' = %d\n", ft_str_is_alpha("aBc1D"));
	printf("'' = %d\n", ft_str_is_alpha(""));
	return (0);
}*/
