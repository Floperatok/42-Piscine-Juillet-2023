/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:33:05 by nsalles           #+#    #+#             */
/*   Updated: 2023/08/01 13:34:41 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;
	int	*buffer;

	diff = max - min;
	if (diff <= 0)
	{
		buffer = malloc(sizeof(char));
		buffer = NULL;
		*range = buffer;
		return (0);
	}
	buffer = malloc(diff * sizeof(int));
	if (buffer == NULL)
		return (-1);
	i = 0;
	while (i < diff)
	{
		buffer[i] = min + i;
		i++;
	}
	*range = buffer;
	return (diff);
}
/*
#include <stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/
