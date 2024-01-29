/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarand <segarand@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:49:06 by segarand          #+#    #+#             */
/*   Updated: 2024/01/26 23:52:48 by segarand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int n)
{
	if (n < 0)
		return (0);
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * ft_recursive_factorial(n - 1));
}

// #include <stdio.h>

// int main(void)
// {
// 	int nb;
// 	int result;

// 	nb = -23;
// 	result = ft_recursive_factorial(nb);
// 	printf("Nombre : %d -- Factoriel : %d\n", nb, result);
// 	nb = 0;
// 	while (nb < 16)
// 	{
// 		result = ft_recursive_factorial(nb);
// 		printf("Nombre : %d -- Factoriel : %d\n", nb, result);
// 		nb++;
// 	}
// }