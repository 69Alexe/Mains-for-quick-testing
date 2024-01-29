/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_purnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgravel <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:32:15 by tgravel           #+#    #+#             */
/*   Updated: 2024/01/18 18:03:05 by tgravel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		size;
	char	nb_char;

	size = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
	}
	while (nb / size >= 10 || nb / size <= -10)
		size *= 10;
	while (size)
	{
		if (nb >= 0)
			nb_char = (nb / size) + '0';
		else
			nb_char = -(nb / size) + '0';
		write(1, &nb_char, 1);
		nb %= size;
		size /= 10;
	}
}
/*
int	main(void)
{
	int nb1 = 2147483647;
	int nb2 = -2147483648;
	int nb3 = 0;

	ft_putnbr(nb1);
	write(1, "\n", 1);
	ft_putnbr(nb2);
	write(1, "\n", 1);
	ft_putnbr(nb3);
	return (0);
}*/
