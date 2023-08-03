/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:45:25 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/18 19:17:12 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	int				i;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
// ajoute la chaine src a dest
// main fonctionne
#include <stdio.h>
#include <string.h>

int main()
{
	char dest1[20] = "Bonjour";
	char src1[] = " tout le monde";

	char dest2[20] = "Bonjour";
	char src2[] = " tout le monde";

	ft_strncat(dest1, src1, 20);
	printf("%s\n", dest1);

    strncat(dest2, src2, 20);
	printf("%s\n", dest2);
}*/
