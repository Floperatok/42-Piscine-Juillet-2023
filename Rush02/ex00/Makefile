# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malauzie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/30 11:30:42 by malauzie          #+#    #+#              #
#    Updated: 2023/07/30 22:10:08 by nsalles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = main.c read_dict.c str_cut.c transposition.c string.c
OBJECT = $(SRC: .c = .o)

CC = cc
CFLAGS += -Wall -Wextra -Werror -I./includes

all: $(NAME)

$(NAME): $(OBJECT) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECT)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
