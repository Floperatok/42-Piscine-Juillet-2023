/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bibli.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:44:36 by nsalles           #+#    #+#             */
/*   Updated: 2023/08/01 00:28:34 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIBLI_H
# define BIBLI_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

struct  metadata
{
    int     ysize;
    int     xsize;
    char    empty_char;
    char    full_char;
    char    square_char;
};

/* test_map.c */
struct metadata	error_case(void);
char    *get_first_line(char *filename);
struct metadata get_map_info(char *filename);
int testmap(char **tab, struct metadata map_info);

/* read_map.c */
char	*readmap(char *filename, int size_x, int size_y);
char	**get_tab_map(char *filename, int size_x, int size_y);

/* str_func.c */
int	ft_atoi(char *str);
int	ft_strlen(char *str);
#endif
