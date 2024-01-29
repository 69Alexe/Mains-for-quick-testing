/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguayo- <saguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:17:42 by saguayo-          #+#    #+#             */
/*   Updated: 2024/01/22 19:50:44 by saguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < nb && sqrt < 46340)
		++sqrt;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d", ft_sqrt(0));
// }