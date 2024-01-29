/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:32:34 by artopall          #+#    #+#             */
/*   Updated: 2024/01/27 17:44:13 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str += 1;
	}
}

void	ft_putnbr(int nb)
{
	long	copy;

	copy = nb;
	if (copy < 0)
	{
		ft_putchar('-');
		copy *= -1;
	}
	if (copy > 9)
	{
		ft_putnbr(copy / 10);
	}
	ft_putchar("0123456789"[copy % 10]);
}
