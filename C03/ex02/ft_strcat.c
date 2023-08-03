/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:19:08 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/18 16:47:25 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char*src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
// main fonctionne
// ajoute la chaine src a dest
#include <stdio.h>
#include <string.h>
int	main()
{
    char dest1[20] = "Bonjour";
    char src1[] = " tout le monde";

    char dest2[20] = "Bonjour";
    char src2[] = " tout le monde";

	
	printf("%s\n", ft_strcat(dest1, src1));
	printf("%s\n", strcat(dest2, src2));
	return (0);
}*/
