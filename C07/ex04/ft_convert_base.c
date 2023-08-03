/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:20:22 by nsalles           #+#    #+#             */
/*   Updated: 2023/08/02 16:28:30 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str);
int				ft_atoi_base(char *str, char *base);

int	is_double(char *base, char c)
{
	int	res;

	res = 0;
	while (*base)
	{
		if (*base == c)
			res++;
		base++;
	}
	if (res != 1)
		return (0);
	return (1);
}

int	is_baseok(char *base)
{
	if (ft_strlen(base) <= 1)
		return (0);
	while (*base)
	{
		if (*base == '-' || *base == '+' || *base < '!' || *base > '~')
			return (0);
		if (!is_double(base, *base))
			return (0);
		base++;
	}
	return (1);
}

void	ft_get_base(int nb, char *base, char *str, int *index)
{
	unsigned int	size_base;
	unsigned int	n;

	size_base = ft_strlen(base);
	if (nb < 0)
	{
		str[*index] = '-';
		*index += 1;
		n = -nb;
	}
	else
		n = nb;
	if (n >= size_base)
	{
		ft_get_base(n / size_base, base, str, index);
		ft_get_base(n % size_base, base, str, index);
	}
	else
	{
		str[*index] = base[nb % size_base];
		*index += 1;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	char	*n_final;
	int		index;

	index = 0;
	if (!is_baseok(base_from) || !is_baseok(base_to))
		return (0);
	n = ft_atoi_base(nbr, base_from);
	n_final = malloc(sizeof(char) * 33);
	ft_get_base(n, base_to, n_final, &index);
	return (n_final);
}
/*
#include <stdio.h>
int		main(void)
{
	char	*tab;
    tab = ft_convert_base("0.4561", "0123456789", "0123456789");
    printf("%s\n\n", tab);
	tab = ft_convert_base("()(()))()(0()", "()", "0123456789");
    printf("%s\n\n", tab);
	tab = ft_convert_base("-20", "0123456789", "0123456789");
	printf("%s\n\n", tab);
	tab = ft_convert_base("-2147483648", "0123456789", "0123456789");
    printf("%s\n\n", tab);
	tab = ft_convert_base("2147483647", "0123456789", "0123456789");
    printf("%s\n\n", tab);
	tab = ft_convert_base("salut", "tulas", "0123456789");
    printf("%s\n\n", tab);
	tab = ft_convert_base("   ---+154", "0123456789", "0123456789");
    printf("%s\n\n", tab);
	tab = ft_convert_base("1121133001", "0123", "012345");
    printf("%s\n\n", tab);
	tab = ft_convert_base("cwocwcwoocwowc", "cow", "horse");
    printf("%s\n\n", tab);
	tab = ft_convert_base("154ab789", "0123456789", "0123456789");
    printf("%s\n\n", tab);
	tab = ft_convert_base("---+154", "01123456789", "0123456789");
    printf("%s\n\n", tab);
	tab = ft_convert_base("---+154", "012+3456789", "0123456789");
    printf("%s\n\n", tab);
	tab = ft_convert_base("---+154", "0123456789", "9");
    printf("%s\n\n", tab);
	return (0);
}*/
/*
int	main(void)
{
	printf("-10101010 : %s\n", ft_convert_base("   \n -10101010", "01", "01"));
	printf("-2D : %s\n", ft_convert_base("\t\n\r\v\f--+++++-45", 
			"0123456789", "0123456789ABCDEF"));
	printf("1111 : %s\n", ft_convert_base("15", "0123456789", "01"));
	printf("16 : %s\n", ft_convert_base("10000", "01", "0123456789"));
	printf("-1f : %s\n", ft_convert_base("-31", "0123456789", 
			"0123456789abcdef"));
	printf("31 : %s\n", ft_convert_base("+1f", "0123456789abcdef", 
			"0123456789"));
	printf("0 : %s\n", ft_convert_base("0", "0123456789", "0123456789abcdef"));
	printf("0 : %s\n", ft_convert_base("0.1234567", "0123456789", "0123456789"));
	printf("7fffffff : %s\n", ft_convert_base("2147483647", "0123456789", 
			"0123456789abcdef"));
	printf("-2147483648 : %s\n", ft_convert_base("-80000000", 
			"0123456789abcdef", "0123456789"));
	printf("o : %s\n", ft_convert_base("01", "0123456789", "poneyvif"));
	printf("(null) : %s\n", ft_convert_base("", "0123456789", "poney vif"));
	printf("-806y : %s\n", ft_convert_base("-25738", 
			"0123456789", "1234567890ertyu"));

	char *str = ft_convert_base("2147l45", "0123456789", "0123456789abcdef");
	int cur = 0;
	printf("863 : ");
	while (str[cur] != 0)
	{
		printf("%c", str[cur]);
		cur++;
	}
	printf("\n");
}*/
