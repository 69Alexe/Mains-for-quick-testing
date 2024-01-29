/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayoko <genimayoko@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:51:03 by cmayoko           #+#    #+#             */
/*   Updated: 2024/01/21 16:40:41 by cmayoko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	c;
	long	i;

	c = nb;
	if (c <= 0)
	{
		return (0);
	}
	if (c == 1)
	{
		return (1);
	}
	i = 2;
	if (c >= 2)
	{
		while (i * i <= c)
		{
			if (i * i == c)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int    main(void)
{
	printf("sqrt of %d is %d\n", -2282, ft_sqrt(-2282));
	printf("sqrt of %d is %d\n", 25, ft_sqrt(25));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 16, ft_sqrt(16));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
    return (0);
}
*/
