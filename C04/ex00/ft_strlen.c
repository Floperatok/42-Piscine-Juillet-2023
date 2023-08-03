/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:36:25 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/19 16:14:57 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
//main fonctionne
#include <stdio.h>
int	main()
{
	char	*str = "abCDEFgh123";
    char    *str2 = "";

	printf("%s = %d\n", str, ft_strlen(str));
    printf("%s = %d\n", str2, ft_strlen(str2));
}*/
