/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bibli.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:25:52 by thsion            #+#    #+#             */
/*   Updated: 2023/07/30 22:27:36 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIBLI_H
# define BIBLI_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

/*str_cut.c*/
int		ft_size_tab(char *string);
char	**malloc_gr_3(char *string);
char	**cut(char *string);
/*transposition.c*/
void	ft_transposition(char **gr_3, char *string, char ***tab);
void	ft_hundreds(char **gr_3, int j, char ***tab);
void	ft_ten(char **gr_3, int j, char ***tab);
/*read_dict.c*/
char	*make_row_number(char *str);
char	*make_row_letter(char *str);
char	*readfile(char *filename);
char	***make_malloc(char *str);
char	***make_dict(char *str);
/*string.c*/
int		ft_strlen(char *s);
int		count_newline(char *str);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
/*main.c*/
int		main(int ac, char **av);
int		test_input(char *input);
void	converter(char *input, char *filename);
void	print_result(char *numbers, char ***tab);

#endif
