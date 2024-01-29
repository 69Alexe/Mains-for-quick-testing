# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chang-pa <changgyu@yonsei.ac.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 12:02:59 by chang-pa          #+#    #+#              #
#    Updated: 2024/01/24 19:15:14 by chang-pa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Wextra -Werror

AR=ar
ARFLAGS=rcs

SRCS=srcs
INCS=includes

OBJS=$(SRCS)/ft_putchar.o $(SRCS)/ft_swap.o $(SRCS)/ft_putstr.o $(SRCS)/ft_strlen.o $(SRCS)/ft_strcmp.o
TARGET=libft.a

all: $(TARGET)

re: fclean all

$(TARGET): $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)

$(SRCS)/ft_putchar.o:
	$(CC) $(CFLAGS) -o $@ -c $(SRCS)/ft_putchar.c -I $(INCS)
$(SRCS)/ft_swap.o:
	$(CC) $(CFLAGS) -o $@ -c $(SRCS)/ft_swap.c -I $(INCS)
$(SRCS)/ft_putstr.o:
	$(CC) $(CFLAGS) -o $@ -c $(SRCS)/ft_putstr.c -I $(INCS)
$(SRCS)/ft_strlen.o:
	$(CC) $(CFLAGS) -o $@ -c $(SRCS)/ft_strlen.c -I $(INCS)
$(SRCS)/ft_strcmp.o:
	$(CC) $(CFLAGS) -o $@ -c $(SRCS)/ft_strcmp.c -I $(INCS)

fclean: clean
	rm -f libft.a

clean:
	rm -f $(OBJS)
