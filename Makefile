# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmarin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/18 16:25:20 by cmarin            #+#    #+#              #
#    Updated: 2016/09/29 17:39:09 by cmarin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
OBJ = $(SRC:.c=.o)
FLAG = -Wall -Wextra -Werror
FLAGMLX = -lmlx -framework OpenGL -framework AppKit
SRC = src/main.c\
	  src/drawer.c\
	  src/ft_line.c\
	  src/init_drawer.c\
	  src/parsing.c
LIB = ./libft/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@make -C ./libft
	@gcc $(FLAG) $(FLAGMLX) $(SRC) $(LIB) -o $(NAME)

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@make -C ./libft clean
	@rm -f $(OBJ)

fclean: clean
	@make -C ./libft fclean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
