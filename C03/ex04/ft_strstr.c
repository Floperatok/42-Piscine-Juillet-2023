/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:00:58 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/23 13:26:52 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
// main fonctionne 
// trouve une chaine de caractere dans une autre plus grande
#include <stdio.h>
#include <string.h>

int		main()
{
	printf("%s == ", ft_strstr("bonjour tout le monde", "tout"));
	printf("%s\n", strstr("bonjour tout le monde", "tout"));

	printf("%s == ", ft_strstr("bonjour tout le monde", ""));
	printf("%s\n", strstr("bonjour tout le monde", ""));

    printf("%s == ", ft_strstr("bonjour tout le monde tout", "tout"));
    printf("%s\n", strstr("bonjour tout le monde tout", "tout"));

    printf("%s == ", ft_strstr("bonjour tout le monde tout", "tous"));
    printf("%s\n", strstr("bonjour tout le monde tout", "tous"));

	return (0);
}*/
