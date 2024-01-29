/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:39:41 by segarand          #+#    #+#             */
/*   Updated: 2024/01/27 19:48:10 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}

// #include <stdio.h>

// int main(void)
// {
// 	int nb;
// 	int power;

// 	nb = 3;
// 	power = -1;
// 	printf("Nombre : %d -- Power : %d -- Result : %d\n", nb,
// 		power, ft_recursive_power(nb, power));
// 	power = 0;
// 	while (power <= 14)
// 	{
// 		printf("Nombre : %d -- Power : %d -- Result : %d\n", nb, power,
// 			ft_recursive_power(nb, power));
// 		power++;
// 	}
// 	return (0);
// }