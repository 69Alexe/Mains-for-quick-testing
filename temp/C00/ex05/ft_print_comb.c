/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:41:26 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/11 16:01:48 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//fonction pour ecrire un nombre.
void	ft_putchar(char unite)
{
	write(1, &unite, 1);
}
//fonction pour combiner ma centaine, dizaine et unite.

void	ft_combination(char centaine, char dizaine, char unite)
{
	ft_putchar(centaine + '0');
	ft_putchar(dizaine + '0');
	ft_putchar(unite + '0');
	if (centaine == 7 && dizaine == 8 && unite == 9)
	{
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
}
//fonction pour calculer de 012 a 789, 
//ce qui appelle la fonction pour combiner les nombres de maniere formatter

void	ft_print_comb(void)
{
	int	centaine;
	int	dizaine;
	int	unite;

	centaine = 0;
	while (centaine <= 7)
	{
		dizaine = centaine + 1;
		while (dizaine <= 8)
		{
			unite = dizaine + 1;
			while (unite <= 9)
			{
				ft_combination(centaine, dizaine, unite);
				unite++;
			}
			dizaine++;
		}
		centaine++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
