/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:52:16 by segarand          #+#    #+#             */
/*   Updated: 2024/01/27 19:43:13 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	factorial = 1;
	while (nb > 0)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}

// #include <stdio.h>

// int main(void)
// {
// 	int nb;
// 	int result;

// 	nb = -23;
// 	result = ft_iterative_factorial(nb);
// 	printf("Nombre : %d -- Factoriel : %d\n", nb, result);
// 	nb = 0;
// 	while (nb < 16)
// 	{
// 		result = ft_iterative_factorial(nb);
// 		printf("Nombre : %d -- Factoriel : %d\n", nb, result);
// 		nb++;
// 	}
// }