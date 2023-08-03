/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:33:49 by nsalles           #+#    #+#             */
/*   Updated: 2023/08/01 01:05:03 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibli.h"

int	main(int argc, char **argv)
{
	struct metadata	map_info;
	int			i;
	char		**tab;

	tab = get_tab_map("map", 10, 9);
	map_info = get_map_info("map");
	printf("ysize = %d\n", map_info.ysize);
	printf("xsize = %d\n", map_info.xsize);
	printf("empty_char = %d\n", map_info.empty_char);
	printf("full_char = %d\n", map_info.full_char);
	printf("square_char = %d\n", map_info.square_char);
	if (testmap(tab, map_info))
	{
		write(2, "map error\n", 10);
		return (1);
	}
	i = 0;
	while (i < 10)
		printf("%s\n", tab[i++]);
	return (0);
}
