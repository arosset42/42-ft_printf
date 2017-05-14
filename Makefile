# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arosset <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/19 10:57:49 by arosset           #+#    #+#              #
#    Updated: 2016/12/19 10:57:54 by arosset          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libftprintf.a

CC 			=	gcc

CFLAGS 		= 	#-Wall -Werror -Wextra

INCLUDES 	= 	ft_printf.h

SRC 		= 	ft_printf.c ft_get.c ft_itoa_base.c ft_memalloc.c ft_bzero.c \
				ft_atoi.c ft_isdigit.c ft_strdup.c ft_strlen.c ft_strcpy.c \
				ft_convert.c ft_strdel.c ft_putstr.c ft_putchar.c ft_print.c \
				ft_len_print.c ft_max_str_print.c ft_put_len_str.c ft_putwchar.c \
				ft_power.c ft_putwstr.c ft_isupper.c ft_uitoa_base.c ft_error.c\
				ft_put_n_char.c ft_memdel.c ft_putnbr.c ft_undefined.c ft_str_index.c
OBJ 		= 	$(SRC:.c=.o)

# COLORS
C_NO		=	"\033[00m"
C_OK		=	"\033[35m"
C_GOOD		=	"\033[32m"
C_ERROR		= 	"\033[31m"
C_TEST		= 	"\033[33m"

# MESSAGE
SUCCESS		=	$(C_GOOD)SUCCESS$(C_NO)
OK 			=	$(C_OK)OK$(C_NO)
F_TEST 		= 	$(C_TEST)DEBUT TEST$(C_NO)
ERROR		= 	$(C_ERROR) ERROR $(C_NO)
C_DEL		= 	$(C_ERROR) DELETE $(C_NO)
C_OBJ		= 	$(C_OK) OBJ $(NAME) $(C_NO)

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo Lib : [ $(NAME) ] $(SUCCESS)

%.o: %.c $(INCLUDES)
	@$(CC) $(CFLAGS) -c -o $@ $< -I $(INCLUDES)
	@echo $(C_OBJ) [ $< ] $(OK)
clean :
	@rm -f $(OBJ)
	@rm -f *.gch
	@echo $(C_DEL) $(OBJ)

fclean : clean
	@rm -f $(NAME)
	@echo $(C_DEL) $(NAME)

re : fclean all

mtest : all
	@echo $(F_TEST)
	@$(CC) $(CFLAGS) main_test.c ft_printf.h libftprintf.a #libft.a
	@./a.out | cat -e

cleantest :
	@rm -f $(OBJ)
	@rm -f *.gch
	@rm -rf a.out
	@echo $(C_DEL) a.out
	@echo $(C_DEL) $(OBJ)
norme :
	@norminette $(SRC) $(INCLUDES)

.PHONY: clean, fclean, re
