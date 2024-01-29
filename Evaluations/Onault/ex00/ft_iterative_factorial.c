/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onault <onault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:26:32 by onault            #+#    #+#             */
/*   Updated: 2024/01/24 12:14:46 by onault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	return_nb;

	return_nb = 1;
	if (nb == 0)
		return (1);
	if (nb < 1)
		return (0);
	while (nb != 0)
	{
		return_nb = return_nb * nb;
		nb--;
	}
	return (return_nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("0:%d\n", ft_iterative_factorial(-10));
// 	printf("0:%d\n", ft_iterative_factorial(-1));
// 	printf("1:%d\n", ft_iterative_factorial(0));
// 	printf("1:%d\n", ft_iterative_factorial(1));
// 	printf("3628800:%d\n", ft_iterative_factorial(10));
// 	printf("6:%d\n", ft_iterative_factorial(3));
// }