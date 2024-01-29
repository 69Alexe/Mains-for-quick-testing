/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:37:53 by segarand          #+#    #+#             */
/*   Updated: 2024/01/27 19:57:59 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div_max;
	int	div_min;

	if (nb <= 1)
		return (0);
	div_min = 2;
	div_max = ((nb - nb % div_min) / div_min);
	while (div_min <= div_max)
	{
		if (nb % div_min == 0)
			return (0);
		div_min++;
		div_max = (nb - nb % div_min) / div_min;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		nb = 0;
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

// #include <stdio.h>

// int main(void)
// {
// 	int index;

// 	index = 2147483630;
// 	printf("nombre : %d -- next Prime : %d\n", index,
// 		ft_find_next_prime(index));
// 	index = 2147483647;
// 	printf("nombre : %d -- next Prime : %d\n", index,
// 		ft_find_next_prime(index));
//     index = -234;
// 	printf("nombre : %d -- next Prime : %d\n", index,
// 		ft_find_next_prime(index));
// 	index = -2147483648;
//     printf("nombre : %d -- next Prime : %d\n", index,
// 		ft_find_next_prime(index));

//     index = 0;
// 	while (index <= 20)
// 	// index = 2147483605;
// 	// while (index <= 2147483647)
// 	{
// 		printf("nombre : %d -- next Prime : %d\n", index,
// 			ft_find_next_prime(index));
// 		if (index == 2147483647)
// 			break;
// 		index++;
// 	}
// 	//printf("Total Prime : %d\n", total);
//     return (0);
// }