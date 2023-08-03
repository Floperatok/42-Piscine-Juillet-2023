/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:53:18 by nsalles           #+#    #+#             */
/*   Updated: 2023/08/01 01:37:36 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibli.h"

/*
	reste a faire:
	- cas 5
*/

struct metadata	error_case(void)
{
	struct metadata	error;

	error.ysize = -1;
	error.xsize = -1;
	error.empty_char = ' ';
	error.full_char = ' ';
	error.square_char = ' ';
	return (error);
}

char	*get_first_line(char *filename)
{
	int		file;
	char	c;
	char	*first_line;
	int		size;
	int		i;

	size = 0;
	file = open(filename, 0);
	while (read(file, &c, 1) == 1)
	{
		if (c == '\n')
			break ;
		size++;
	}
	close(file);
	first_line = (char *)malloc(sizeof(char) * size + 1);
	file = open(filename, 0);
	i = 0;
	while (read(file, &c, 1) == 1)
	{
		if (c == '\n')
			break ;
		first_line[i++] = c;
	}
	first_line[i] = '\0';
	close(file);
	return (first_line);
}

struct metadata	get_map_info(char *filename)
{
	struct metadata	map_info;
	int				file;
	char			c;
	char			*first_line;

	map_info.ysize = 0;
	map_info.xsize = 0;
	first_line = get_first_line(filename);
	while (*first_line && *first_line >= '0' && *first_line <= '9')
	{
		map_info.ysize = map_info.ysize * 10 + (*first_line - '0');
		first_line++;
	}
	map_info.empty_char = *first_line;
	if (map_info.empty_char < 32 || map_info.empty_char > 126)
		return (error_case());
	first_line++;
	map_info.full_char = *first_line;
    if (map_info.full_char < 32 || map_info.full_char > 126)
        return (error_case());
	first_line++;
	map_info.square_char = *first_line;
    if (map_info.square_char < 32 || map_info.square_char > 126)
        return (error_case());
	file = open(filename, 0);
	while (read(file, &c, 1) == 1)
	{
		if (c == '\n')
			break ;
	}
	while (read(file, &c, 1) == 1)
	{
		if (c == '\n')
			break ;
		map_info.xsize++;
	}
	return (map_info);
}

int	testmap(char **tab, struct metadata map_info)
{
	int	i;
	int	j;
	int	len_row;

	if (map_info.xsize < 1 || map_info.ysize < 1)
		return (1);
	i = -1;
	while (tab[++i] != NULL)
	{
		j = -1;
		while (tab[i][++j])
		{
			if (tab[i][j] != map_info.empty_char && 
				tab[i][j] != map_info.full_char)
				return (1);
		}
		printf("i = %d, j = %d\n", i, j);
		printf("tab[i] == NULL : %d\n", tab[i] == NULL); // seg fault vers ici
		if (j != map_info.xsize)
			return (1);
	}
	if (i != map_info.ysize)
		return (1);
	return (0);
}










