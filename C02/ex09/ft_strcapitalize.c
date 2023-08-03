/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:51:09 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/17 14:43:22 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_letter(char c)
{
	return (is_lower(c) || is_upper(c));
}

int	is_start_word(char *str, int i)
{
	if (!(is_letter(str[i])))
		return (0);
	if (i == 0)
		return (1);
	return (!(is_letter(str[i - 1])) && 
		!(str[i - 1] >= '0' && str[i - 1] <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_start_word(str, i) && is_lower(str[i]))
			str[i] -= 32;
		else if (!(is_start_word(str, i)) && is_upper(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <unistd.h>
void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[100] = "salut, coMMent tu vAs ? 42mOts quArAnTe-dEux; cinQte+et+un";
	ft_putstr(c);
	ft_putstr("\n");
	ft_putstr(ft_strcapitalize(c));
    ft_putstr("\n");
	return (0);
}*/
