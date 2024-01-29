/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayoko <genimayoko@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:39:43 by cmayoko           #+#    #+#             */
/*   Updated: 2024/01/21 14:59:12 by cmayoko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	if (nb > 0)
	{
		resultat *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (resultat);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_recursive_factorial(4)); // 4 * 3 * 2 * 1 = 24
}
*/
