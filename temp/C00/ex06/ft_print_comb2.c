/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:44:47 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/14 12:09:11 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//putchar
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//separe le nombre en deux characters a cause de ASCII

void	ft_char(int a)
{
	int	first;
	int	second;

	if (a < 10)
	{
		ft_putchar('0');
		ft_putchar(a + '0');
	}
	else
	{
		first = a / 10;
		second = a % 10;
		ft_putchar(first + '0');
		ft_putchar(second + '0');
	}
}
//compte de 00 01 a 98 99, appelle ft_char pour bien afficher

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_char(a);
			ft_putchar(' ');
			ft_char(b);
			if (a < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++b;
		}
		++a;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
