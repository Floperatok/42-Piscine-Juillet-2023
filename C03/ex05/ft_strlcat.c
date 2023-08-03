/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:18:24 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/19 15:32:26 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;

	dlen = 0;
	slen = 0;
	while (dest[dlen])
		dlen++;
	while (src[slen])
		slen++;
	i = dlen;
	j = 0;
	if (size <= dlen)
		return (slen + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dlen + slen);
}
/*
// main fonctionne (ne pas oublier le flag)
// ajoute src a dest, dest ne peux pas depasser la taille size, 
// return la taille maximale qu'aurait pu avoir dest
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int main()
{
//init 1
	char			my_dest1[25] = "Bonjour";
	char			my_src1[] = " tout le monde";
	unsigned int	my_result1;

	char            origin_dest1[25] = "Bonjour";
	char            origin_src1[] = " tout le monde";
	unsigned int	origin_result1;
//init 2
    char            my_dest2[25] = "Bonjour";
    char            my_src2[] = "";
    unsigned int    my_result2;

    char            origin_dest2[25] = "Bonjour";
    char            origin_src2[] = "";
    unsigned int    origin_result2;
//init 3
    char            my_dest3[25] = "B";
    char            my_src3[] = "onjour  ";
    unsigned int    my_result3;

    char            origin_dest3[25] = "B";
    char            origin_src3[] = "onjour  ";
    unsigned int    origin_result3;
//init 4
    char            my_dest4[25] = "Bonjour";
    char            my_src4[] = " tout le monde";
    unsigned int    my_result4;

    char            origin_dest4[25] = "Bonjour";
    char            origin_src4[] = " tout le monde";
    unsigned int    origin_result4;

//test 1
	my_result1 = ft_strlcat(my_dest1, my_src1, 25);
	origin_result1 = strlcat(origin_dest1, origin_src1, 25);
	printf("Mine   : %s = %u\n", my_dest1, my_result1);
    printf("Origin : %s = %u\n", origin_dest1, origin_result1);

    printf("---------\n");
//test 2
    my_result2 = ft_strlcat(my_dest2, my_src2, 15);
    origin_result2 = strlcat(origin_dest2, origin_src2, 15);
    printf("Mine   : %s = %u\n", my_dest2, my_result2);
    printf("Origin : %s = %u\n", origin_dest2, origin_result2);

	printf("---------\n");
//test 3
    my_result3 = ft_strlcat(my_dest3, my_src3, 6);
    origin_result3 = strlcat(origin_dest3, origin_src3, 6);
    printf("Mine   : %s = %u\n", my_dest3, my_result3);
    printf("Origin : %s = %u\n", origin_dest3, origin_result3);

    printf("---------\n");
//test 4
    my_result4 = ft_strlcat(my_dest4, my_src4, 1);
    origin_result4 = strlcat(origin_dest4, origin_src4, 1);
    printf("Mine   : %s = %u\n", my_dest4, my_result4);
    printf("Origin : %s = %u\n", origin_dest4, origin_result4);

	return (0);
}*/
