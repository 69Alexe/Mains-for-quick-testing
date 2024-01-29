/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayoko <genimayoko@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:14:24 by cmayoko           #+#    #+#             */
/*   Updated: 2024/01/21 17:53:30 by cmayoko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

// #include <stdio.h>

// int main (void)
// {
// 	printf("%d -> %d\n", -12, ft_is_prime(-12));
// 	printf("%d -> %d\n", 0, ft_is_prime(0));
// 	printf("%d -> %d\n", 1, ft_is_prime(1));
// 	printf("%d -> %d\n", 2, ft_is_prime(2));
// 	printf("%d -> %d\n", 8, ft_is_prime(8));
// }
