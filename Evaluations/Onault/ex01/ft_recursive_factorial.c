/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onault <onault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:47:38 by onault            #+#    #+#             */
/*   Updated: 2024/01/24 12:10:50 by onault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("0:%d\n", ft_recursive_factorial(-10));
// 	printf("0:%d\n", ft_recursive_factorial(-1));
// 	printf("1:%d\n", ft_recursive_factorial(0));
// 	printf("1:%d\n", ft_recursive_factorial(1));
// 	printf("3628800:%d\n", ft_recursive_factorial(10));
// 	printf("6:%d\n", ft_recursive_factorial(3));
// }