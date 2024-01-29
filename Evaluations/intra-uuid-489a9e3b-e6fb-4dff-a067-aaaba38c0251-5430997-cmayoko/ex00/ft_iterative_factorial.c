/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayoko <genimayoko@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:25:49 by cmayoko           #+#    #+#             */
/*   Updated: 2024/01/21 14:36:48 by cmayoko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	while (nb > 0)
	{
		resultat *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (resultat);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(5)); 5 * 4 * 3 * 2 * 1
// }
