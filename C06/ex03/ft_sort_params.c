/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:29:35 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/21 19:17:23 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap_str(char **str1_ptr, char **str2_ptr)
{
	char	*tmp;

	tmp = *str1_ptr;
	*str1_ptr = *str2_ptr;
	*str2_ptr = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] && !(s2[i]))
		return (1);
	if (!(s1[i]) && s2[i])
		return (-1);
	return (0);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				swap_str(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		putstr(argv[i]);
		i++;
	}
}
