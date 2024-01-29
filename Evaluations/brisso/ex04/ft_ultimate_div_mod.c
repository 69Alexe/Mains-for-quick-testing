/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrisso <clbrisso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:41:02 by clbrisso          #+#    #+#             */
/*   Updated: 2024/01/18 15:48:11 by clbrisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main(void)
// {
// 	int nbr1;
// 	int nbr2;

// 	nbr1 = 7;
// 	nbr2 = 3;
// 	ft_ultimate_div_mod(&nbr1, &nbr2);
// 	printf("%i\n%i\n", nbr1, nbr2);
// }
