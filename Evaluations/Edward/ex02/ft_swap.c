/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchavez <edchavezbenalcazar@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:12:49 by edchavez          #+#    #+#             */
/*   Updated: 2024/01/15 16:48:36 by edchavez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	nbr1;
// 	int	nbr2;

// 	nbr1 = 500;
// 	nbr2 = 777;
// 	printf("Avant l'appel de ft_swap: nbr1 = %d, nbr2 = %d\n", nbr1, nbr2);
// 	ft_swap(&nbr1, &nbr2);
// 	printf("Après l'appel de ft_swap: nbr1 = %d, nbr2 = %d", nbr1, nbr2);
// 	return (0);
// }
