/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayoko <genimayoko@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:00:19 by cmayoko           #+#    #+#             */
/*   Updated: 2024/01/21 15:07:38 by cmayoko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultat;

	resultat = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		resultat *= nb;
		power--;
	}
	return (resultat);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_power(3, 2)); // 3 * 3 = 9
}
*/
