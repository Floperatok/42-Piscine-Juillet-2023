/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transposition.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:04:36 by thsion            #+#    #+#             */
/*   Updated: 2023/07/30 23:36:51 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibli.h"

void	ft_transposition(char **gr_3, char *string, char ***tab)
{
	int		j;
	int		i;
	int		size;
	int		count_zero;
	char	*mille;

	j = 0;
	size = ft_size_tab(string);
	while (j < size)
	{
		ft_hundreds(gr_3, j, tab);
		ft_ten(gr_3, j, tab);
		count_zero = (((size - j++) * 3) - 3);
		mille = (char *) malloc(count_zero * sizeof(char) + 2);
		if (count_zero >= 3)
		{
			mille[0] = '1';
			i = 1;
			while (i <= count_zero)
				mille[i++] = '0';
			mille[i] = '\0';
			print_result(mille, tab);
		}
	}
	write(1, "\n", 1);
}

void	ft_hundreds(char **gr_3, int j, char ***tab)
{
	char	banane[2];

	banane[0] = gr_3[j][0];
	banane[1] = '\0';
	if (gr_3[j][0] == '-')
		return ;
	if (gr_3[j][0] >= '1' && gr_3[j][0] <= '9')
	{
		print_result(banane, tab);
		print_result("100", tab);
	}
}

void	ft_ten(char **gr_3, int j, char ***tab)
{
	char	ten[3];

	ten[2] = '\0';
	if (gr_3[j][1] == '-')
		return ;
	if (gr_3[j][2] == '0')
	{
		ten[0] = gr_3[j][1];
		ten[1] = gr_3[j][2];
		print_result(ten, tab);
	}
	else if (gr_3[j][1] == '1' && gr_3[j][2] != '0')
	{
		ten[0] = gr_3[j][1];
		ten[1] = gr_3[j][2];
		print_result(ten, tab);
	}
	else if (gr_3[j][1] != '1' && gr_3[j][2] != '0')
	{
		ten[0] = gr_3[j][1];
		ten[1] = '0';
		print_result(ten, tab);
		print_result(&gr_3[j][2], tab);
	}
}
