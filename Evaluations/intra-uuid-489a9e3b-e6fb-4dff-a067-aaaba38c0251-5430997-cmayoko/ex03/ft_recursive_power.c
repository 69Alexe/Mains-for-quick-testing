/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayoko <genimayoko@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:08:08 by cmayoko           #+#    #+#             */
/*   Updated: 2024/01/22 16:20:52 by cmayoko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(-1, 3)); //-1
// 	printf("%d\n", ft_recursive_power(0, 0)); //1
// 	printf("%d\n", ft_recursive_power(2, 0)); //1
// 	printf("%d\n", ft_recursive_power(8, 1)); //8
// 	printf("%d\n", ft_recursive_power(2, 2)); //4
// }
