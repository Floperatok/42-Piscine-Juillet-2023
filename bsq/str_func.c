/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:08:09 by nsalles           #+#    #+#             */
/*   Updated: 2023/08/01 00:03:18 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_atoi(char *str)
{
    int resultat;
    int sign;
    int i;
    int nb_sign;

    resultat = 0;
    sign = 1;
    i = 0;
    nb_sign = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        resultat = resultat * 10 + (str[i] - '0');
        i++;
    }
    return (resultat * sign);
}
