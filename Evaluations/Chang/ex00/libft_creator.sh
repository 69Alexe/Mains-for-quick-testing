#!/bin/sh
gcc -Wall -Wextra -Werror -o ft_swap.o -c ft_swap.c
gcc -Wall -Wextra -Werror -o ft_strcmp.o -c ft_strcmp.c
gcc -Wall -Wextra -Werror -o ft_putchar.o -c ft_putchar.c
gcc -Wall -Wextra -Werror -o ft_putstr.o -c ft_putstr.c
gcc -Wall -Wextra -Werror -o ft_strlen.o -c ft_strlen.c

ar rcs libft.a ft_swap.o ft_strcmp.o ft_putchar.o ft_putstr.o ft_strlen.o
