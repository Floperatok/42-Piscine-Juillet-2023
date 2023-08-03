/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:11:49 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/27 21:50:54 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	i = min;
	j = 0;
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int *range;

	range = ft_range(0, 5);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", 
		range[0], range[1], range[2], range[3], range[4]);
	
	range = ft_range(3, 3);
	
	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d", range[0], range[1]);
}*/
