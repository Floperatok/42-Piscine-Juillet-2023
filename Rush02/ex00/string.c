/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 08:50:52 by thsion            #+#    #+#             */
/*   Updated: 2023/07/30 23:25:25 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibli.h"

/*
 *		@function: ft_strlen
 *		@params: char *s
 *		@description: return the length of a string
 *		@return: int
*/
int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
 *		@function: printfd
 *		@params: int fd, char *s, int ret
 *		@description: print a string on a file descriptor
 *		@return: int
*/
/*
int	printfd(int fd, char *s, int ret)
{
	if (fd < 0)
		return (printfd(2, "Error fd", -1));
	if (!s)
		return (printfd(2, "NULL string", -1));
	write(fd, s, ft_strlen(s));
	return (ret);
}
*/
/*
 *		@function: ft_strchr
 *		@params: char *s, char c
 *		@description: return the first occurence of c in s
 *		@return: char *
*/
/*
char	*ft_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
*/
/*
 *		@function: ft_strschr
 *		@params: char *s, char *c
 *		@description: return the first occurence of a char in c in s
 *		@return: char *
*/
/*
char	*ft_strschr(char *s, char *c)
{
	while (*s)
	{
		if (ft_strchr(c, *s))
			return (s);
		s++;
	}
	return (NULL);
}
*/
/*
    @function: count_newline
    @params: char *str
    @description: compte le nombre de ligne valide dans le dictionnaire
    @return: int counter
*/
int	count_newline(char *str)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == '\n')
			i++;
		counter++;
		while (str[i] != '\n' && str[i])
			i++;
	}
	return (counter);
}
