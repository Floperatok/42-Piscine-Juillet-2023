/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <nsalles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:53:15 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/30 22:11:34 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibli.h"

/*
	@function: make_row
	@params: char **number, char **letter, char *str, int len
	@description: rempli number et letter par la ligne pointee par *str
	@return: void
*/
char	*make_row_number(char *str)
{
	char	*number;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[len] >= '0' && str[len] <= '9')
		len++;
	number = (char *)malloc(sizeof(char) * len + 1);
	while (*str >= '0' && *str <= '9')
	{
		number[i] = *str;
		i++;
		str++;
	}
	number[i] = '\0';
	return (number);
}

char	*make_row_letter(char *str)
{
	char	*letter;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (str[++len] != '\n' && str[len] != '\0')
		len++;
	letter = (char *)malloc(sizeof(char) * len + 1);
	while (*str != '\n' && *str != '\0')
	{
		letter[i] = *str;
		i++;
		str++;
	}
	letter[i] = '\0';
	return (letter);
}

/*
    @function: readfile
    @params: char *filename, char **str
    @description: lit un fichier et rempli str avec son contenu
    @return: void
*/
char	*readfile(char *filename)
{
	int		file;
	char	c;
	int		size_file;
	int		i;
	char	*str;

	i = 0;
	c = 0;
	size_file = 0;
	file = open(filename, 0);
	if (file < 0)
		write(2, "Error: cannot open file\n", 24);
	while (read(file, &c, 1) == 1)
		size_file++;
	close(file);
	str = malloc((size_file + 1) * (sizeof(char)));
	file = open(filename, 0);
	if (file < 0)
		write(2, "Error: cannot open file\n", 24);
	while (read(file, &c, 1) == 1)
		str[i++] = c;
	str[i] = '\0';
	return (str);
}

char	***make_malloc(char *str)
{
	char	***tab;
	int		nb_line;

	nb_line = count_newline(str);
	tab = (char ***)malloc(2 * sizeof(char **));
	tab[0] = (char **)malloc(nb_line * sizeof(char *));
	tab[1] = (char **)malloc(nb_line * sizeof(char *));
	return (tab);
}

/*
	@function: make_dir
	@params: char ****tab, char *str
	@description: structure les donnees de str dans tab
	@return: void
*/
char	***make_dict(char *str)
{
	int		i;
	char	***tab;

	tab = make_malloc(str);
	i = 0;
	while (*str)
	{
		while (*str != '\0' && *str == '\n')
			str++;
		if (*str != '\0')
		{
			tab[0][i] = make_row_number(str);
			while (*str >= '0' && *str <= '9')
				str++;
			while (*str == ' ' || *str == ':')
				str++;
			tab[1][i++] = make_row_letter(str);
		}
		while (*str != '\n' && *str != '\0')
			str++;
	}
	return (tab);
}
