/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:45:37 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/18 16:39:44 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
// compare les n premiers caracteres
// main fonctionne
#include <stdio.h>
#include <string.h>
int main()
{
	printf("%d\n", ft_strncmp("hello", "help", 3));
    printf("%d\n", strncmp("hello", "help", 3));

	printf("-------\n");

    printf("%d\n", ft_strncmp("hello", "help", 5));
    printf("%d\n", strncmp("hello", "help", 5));

	return (0);
}*/
