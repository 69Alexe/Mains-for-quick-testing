# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 16:41:29 by gachalif          #+#    #+#              #
#    Updated: 2024/01/22 17:43:11 by gachalif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc



CFLAGS = -Wall -Wextra -Werror $(HEADERS)

SRCS_DIR	= srcs
INCLUDE_DIR = includes

SRCS_HEADERS = ft.h \
			
HEADERS = $(addprefix -I./$(INCLUDE_DIR)/, $(SRCS_HEADERS))

SRCS_C = ft_putchar.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_strlen.c \
			ft_swap.c \

SRCS_OBJECTS = $(addprefix ./$(SRCS_DIR)/, $(SRCS_C))
OBJS		= $(SRCS_OBJECTS:.c=.o)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

all:			$(NAME)

clean:
				-rm -f $(OBJS) 

fclean:			clean
					-rm -f $(NAME)

re:				fclean $(NAME)

.PHONY:		all clean fclean re