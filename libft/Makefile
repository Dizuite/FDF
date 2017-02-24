# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/13 19:21:20 by cmarin            #+#    #+#              #
#    Updated: 2016/09/29 12:08:01 by cmarin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS= -Wall -Wextra -Werror

SRC = ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strlen.c\
	  ft_strdup.c\
	  ft_strcpy.c\
	  ft_strncpy.c\
	  ft_strcat.c\
	  ft_strncat.c\
	  ft_strlcat.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strstr.c\
	  ft_strnstr.c\
	  ft_strcmp.c\
	  ft_strncmp.c\
	  ft_atoi.c\
	  ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_memalloc.c\
	  ft_memdel.c\
	  ft_strnew.c\
	  ft_strdel.c\
	  ft_strclr.c\
	  ft_putchar.c\
	  ft_putstr.c\
	  ft_putendl.c\
	  ft_putnbr.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strequ.c\
	  ft_strnequ.c\
	  ft_strsub.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_strsplit.c\
	  ft_itoa.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_strdupchr.c\
	  ft_delchr.c\
	  get_next_line.c\
	  ft_tabcopy.c\
	  ft_tablen.c\
	  ft_freetab.c\
	  ft_revtab.c\
	  ft_puttab.c\
	  ft_tabtoi.c
LIB = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
OBJ = $(SRC:.c=.o)
RM = rm -rf
RANLIB = ranlib

all: $(LIB)

$(LIB): $(OBJ)
#	@echo "Creating Library...";
	@$(AR) $(LIB) $(OBJ)
#	@echo "Done.";
#	@echo "Indexing Library...";
	@$(RANLIB) $(LIB)
#	@echo "Done.";

%.o: %.c
#	@echo "Compiling $<";
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
#	@echo "Cleaning object files...";
	@$(RM) $(OBJ)
#	@echo "Done.";

fclean: clean
#	@echo "Cleaning Library..."
	@$(RM) $(LIB)
#	@echo "Done.";

re: fclean all

me: all clean

.PHONY: all clean fclean re2 re
