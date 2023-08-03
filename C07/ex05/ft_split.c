/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spilt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:44:04 by nsalles           #+#    #+#             */
/*   Updated: 2023/08/01 17:13:05 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	incharset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		while (incharset(*str, charset) && *str)
			str++;
		counter++;
		while (!incharset(*str, charset) && *str)
			str++;
	}
	return (counter);
}

char	*get_word(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (!incharset(str[i], charset) && str[i])
		i++;
	word = (char *)malloc(sizeof(char) * i + 1);
	i = 0;
	while (!incharset(str[i], charset) && str[i])
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;

	tab = (char **)malloc(sizeof(char *) * count_words(str, charset) + 1);
	i = 0;
	while (*str)
	{
		while (incharset(*str, charset) && *str)
			str++;
		if (*str != '\0')
			tab[i] = get_word(str, charset);
		while (!incharset(*str, charset) && *str)
			str++;
		i++;
	}
	tab[i] = (void *)0;
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	char **tab = ft_split("salut je suis nicolas", " ");
	i = 0;
	printf("len tab = %d, salut|je|suis|nicolas : ", len(tab));
	while (tab[i])
		printf("%s|", tab[i++]);
	printf("\n");

	tab = ft_split("salut, je,.,.,.,,,....suis.nicolas,", " ,.");
    i = 0;
    printf("len tab = %d, salut|je|suis|nicolas : ", len(tab));
    while (tab[i])
        printf("%s|", tab[i++]);
    printf("\n");

	tab = ft_split("salutjesuisnicolas", " ");
    i = 0;
    printf("len tab = %d, salutjesuisnicolas : ", len(tab));
    while (tab[i])
        printf("%s|", tab[i++]);
    printf("\n");

	tab = ft_split("     ", " ");
    i = 0;
    printf("len tab = %d : ", len(tab));
    while (tab[i])
        printf("%s|", tab[i++]);
    printf("\n");


}*/
/*
#include <stdio.h>

int		c_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		c_strctn(char *str1, char *str2, int at)
{
	int	len;
	int	i;

	len = c_strlen(str2);
	i = 0;
	while (i < len)
	{
		str1[at + i] = str2[i];
		i++;
	}
	str1[at + i] = 0;
	return (len + at);
}

char	*c_strautojoin(char **strs, char *sep)
{
	char	*str;
	int		len;
	int		seplen;
	int		i;
	int		j;

	len = 1;
	seplen = c_strlen(sep);
	i = 0;
	while (strs[i] != NULL)
	{
		len += c_strlen(strs[i]);
		if (strs[i + 1] != NULL)
			len += seplen;
		i++;
	}
	str = malloc(len * sizeof(char));
	i = 0;
	j = 0;
	while (strs[j])
	{
		i = c_strctn(str, strs[j++], i);
		if (strs[j])
			i = c_strctn(str, sep, i);
	}
	return (str);
}

int		main(void)
{
	char **tab;

	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("Success", "CUT");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("Success", "");
	printf("%s\n", c_strautojoin(tab, " "));
	tab = ft_split("", "");
	printf("OK\n");
	tab = ft_split("", "CUT");
	printf("OK\n");
	tab = ft_split("       ", "       ");
	printf("OK\n");
	tab = ft_split("         ", "       ");
	printf("OK\n");
}*/
