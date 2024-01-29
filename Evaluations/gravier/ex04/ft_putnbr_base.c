/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:28:17 by tgravel           #+#    #+#             */
/*   Updated: 2024/01/27 18:49:11 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		while (base [j])
			if (base[i] == base[j++])
				return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int	nbr_size;

	base_size = ft_isbase(base);
	nbr_size = 1;
	if (base_size == 0)
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	while (nbr / nbr_size >= base_size || nbr / nbr_size <= -(base_size))
		nbr_size *= base_size;
	while (nbr_size)
	{
		if (nbr >= 0)
			write(1, &base[nbr / nbr_size], 1);
		else
			write(1, &base[-(nbr / nbr_size)], 1);
		nbr %= nbr_size;
		nbr_size /= base_size;
	}
}
/*
void	ft_putnbr_base(int nbr, char *base);

int	main (void)
{
	char	*base1 = "abcdefghij";
	char	*base2 = "0";
	char	*base3 = "";
	char	*base4 = "01234567";
	char	*base5 = "0123456789abcdefghijklmnopqrstuvwxyz";

	write(1, "Should print : jihgf\n", 21);
	ft_putnbr_base(98765, base1);
	write(1, "\nShould print nothing\n", 22);
	ft_putnbr_base(1, base2);
	write(1, "\nShould print nothing\n", 22);
	ft_putnbr_base(5, base3);
	write(1, "\nShould print : 17754706657\n", 28);
	ft_putnbr_base(2147483647, base4);
	write(1, "\nShould print : 1z\n", 19);
	ft_putnbr_base(71, base5);
	write(1, "\nShould print : -20000000000\n", 29);
	ft_putnbr_base(-2147483648, base4);
	write(1, "\nShould print : -21\n", 20);
	ft_putnbr_base(-17, base4);
	return (0);
}*/
