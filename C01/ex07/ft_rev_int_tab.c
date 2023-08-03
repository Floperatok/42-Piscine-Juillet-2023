/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:56:03 by nsalles           #+#    #+#             */
/*   Updated: 2023/07/15 20:04:29 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		tmp;
	int		halfsize;

	halfsize = size / 2;
	i = 0;
	while (i < halfsize)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

/*
int		main()
{
	int test[10] = {0, 1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(test, 7);
	return (0);
}
*/
