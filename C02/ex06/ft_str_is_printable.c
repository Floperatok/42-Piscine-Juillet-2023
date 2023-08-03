/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:04:09 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/17 12:37:48 by nsalles          ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int	i;

	if (len(str) == 0)
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
// main ne fonctionne pas
#include <ctype.h>
#include <stdio.h>
int main()
{
	int		i;
	char	c;

	i = 0;
	while (i < 128)
	{
		c = i;
		if (isprint(i) == ft_str_is_printable(&c))
		{
			printf("Error : %d\n", i);
		}
		i++;
	}
}*/
