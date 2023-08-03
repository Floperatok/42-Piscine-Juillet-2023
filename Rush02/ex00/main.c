/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:23:00 by thsion            #+#    #+#             */
/*   Updated: 2023/07/30 23:27:52 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibli.h"

int	test_input(char *input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if (input[i] < '0' || input[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

void	converter(char *input, char *filename)
{
	char	***tab;
	char	*str;
	char	**gr_3;

	if (test_input(input))
	{
		ft_putstr("error\n");
		return ;
	}
	str = readfile(filename);
	tab = make_dict(str);
	gr_3 = cut(input);
	ft_transposition(gr_3, input, tab);
}

void	print_result(char *numbers, char ***tab)
{
	int	i;

	i = 0;
	while (i < 41)
	{
		if (ft_strcmp(tab[0][i], numbers) == 0)
		{
			ft_putstr(tab[1][i]);
			write(1, " ", 1);
			return ;
		}
		i++;
	}
	ft_putstr("error: Not found\n");
}

int	main(int ac, char **av)
{
	if (ac == 2)
		converter(av[1], "numbers.dict");
	else if (ac > 3)
	{
		ft_putstr("Too much argument\n");
		return (-1);
	}
	return (0);
}
