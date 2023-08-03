/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:02:06 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/18 20:04:26 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
// main fonctionne
// calcul la difference entre deux chaines de caracteres
#include <stdio.h>
#include <string.h>
int main()
{
	printf("%d\n", ft_strcmp("Bonsoir", "Bonjour"));
    printf("%d\n", strcmp("Bonsoir", "Bonjour"));
	return (0);
}*/
