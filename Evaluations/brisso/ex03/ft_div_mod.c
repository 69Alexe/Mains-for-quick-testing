/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrisso <clbrisso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:22:04 by clbrisso          #+#    #+#             */
/*   Updated: 2024/01/18 16:44:02 by clbrisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int nbr1;
// 	int nbr2;

// 	ft_div_mod(4, 2, &nbr1, &nbr2);
// 	printf("%i\n%i\n", nbr1, nbr2);
// }
