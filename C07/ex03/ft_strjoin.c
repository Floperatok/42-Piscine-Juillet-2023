/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:51:02 by nsalles           #+#    #+#             */
/*   Updated: 2023/08/02 19:42:18 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = (size - 1) * ft_strlen(sep);
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		total_len;

	i = 0;
	if (size == 0)
		total_len = 1;
	else
		total_len = get_total_len(size, strs, sep) + 1;
	tab = malloc(total_len * sizeof(char));
	if (!tab)
		return (NULL);
	tab[0] = '\0';
	if (size == 0)
		return (tab);
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i != size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("%s", ft_strjoin(argc, argv, "___"));
}*/
/*
int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}*/
