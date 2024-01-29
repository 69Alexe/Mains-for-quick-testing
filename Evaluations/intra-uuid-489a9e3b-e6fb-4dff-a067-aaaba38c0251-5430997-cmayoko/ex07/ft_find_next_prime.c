/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:53:50 by cmayoko           #+#    #+#             */
/*   Updated: 2024/01/22 19:15:16 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

// #include <stdio.h>

// int main (void)
// {
// 	printf("%d -> %d\n", -12, ft_find_next_prime(-12));
// 	printf("%d -> %d\n", 0, ft_find_next_prime(0));
// 	printf("%d -> %d\n", 1, ft_find_next_prime(1));
// 	printf("%d -> %d\n", 2, ft_find_next_prime(2));
// 	printf("%d -> %d\n", 8, ft_find_next_prime(10));
// }
