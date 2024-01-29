/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onault <onault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:55:57 by onault            #+#    #+#             */
/*   Updated: 2024/01/25 18:16:20 by onault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 || power < 0)
		return (0);
	else if (power == 0)
	{
		if (nb < 0)
			return (-1);
		else
			return (1);
	}
	while (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("0:%d\n", ft_recursive_power(-10, -10));
// 	printf("0:%d\n", ft_recursive_power(-11, 2));
// 	printf("1:%d\n", ft_recursive_power(-10, 0));
// 	printf("10:%d\n", ft_recursive_power(-10, 1));
// 	printf("100:%d\n", ft_recursive_power(10, 2));
// 	printf("216:%d\n", ft_recursive_power(-6, 3));
// } 