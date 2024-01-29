/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:05:40 by onault            #+#    #+#             */
/*   Updated: 2024/01/26 11:51:10 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	nb_return;

	if (nb == 0 || power < 0)
		return (0);
	else
	{
		if (nb < 0)
			nb_return = 1;
		else
			nb_return = 1;
	}
	while (power > 0)
	{
		nb_return = nb_return * nb;
		printf("%d\n", nb_return);
		power--;
	}
	return (nb_return);
}
