/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:13:31 by segarand          #+#    #+#             */
/*   Updated: 2024/01/27 19:48:01 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (power - 1 > 0)
	{
		nb = nb * result;
		power--;
	}
	return (nb);
}

#include <stdio.h>

int main(void)
{
	int nb;
	int power;

	nb = -4;
	power = 3;
	printf("Nombre : %d -- Power : %d -- Result : %d\n", nb, power,
		ft_iterative_power(nb, power));
	power = 0;
	while (power <= 14)
	{
		printf("Nombre : %d -- Power : %d -- Result : %d\n", nb, power,
			ft_iterative_power(nb, power));
		power++;
	}
	return (0);
}