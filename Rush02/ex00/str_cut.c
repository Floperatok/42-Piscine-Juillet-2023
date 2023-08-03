/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cut.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:01:45 by thsion            #+#    #+#             */
/*   Updated: 2023/07/30 23:25:37 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibli.h"

int	ft_size_tab(char *string)
{
	int	size;

	if (ft_strlen(string) % 3 == 0)
		size = ft_strlen(string) / 3;
	else
		size = ft_strlen(string) / 3 + 1;
	return (size);
}

char	**malloc_gr_3(char *string)
{
	char	**gr_3;

	if (ft_strlen(string) % 3 == 0)
		gr_3 = (char **) malloc(sizeof(char *) * ft_size_tab(string) + 1);
	else
		gr_3 = (char **) malloc(sizeof(char *) * ft_size_tab(string) + 1);
	return (gr_3);
}

char	**cut(char *string)
{
	int		i;
	int		j;
	int		k;
	char	**gr_3;

	i = ft_strlen(string) - 1;
	j = ft_size_tab(string) - 1;
	gr_3 = malloc_gr_3(string);
	while (i >= 0)
	{
		gr_3[j] = (char *) malloc(sizeof(char) * 4);
		k = 2;
		while (k >= 0)
		{
			if (i < 0)
				gr_3[j][k] = '-';
			else
				gr_3[j][k] = string[i];
			k--;
			i--;
		}
		gr_3[j][3] = '\0';
		j--;
	}
	return (gr_3);
}
