/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segarand <segarand@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:56:27 by segarand          #+#    #+#             */
/*   Updated: 2024/01/26 23:58:47 by segarand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	racine;

	if (nb <= 0)
		return (0);
	racine = 1;
	while (racine * racine < nb)
		racine = racine + 1;
	if (racine * racine == nb)
		return (racine);
	else
		return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     int index;

// 	index = 2147483647;
//     printf("nombre : %d -- Racine : %d\n", index, ft_sqrt(index));
//     index = -1;
//     printf("nombre : %d -- Racine : %d\n", index, ft_sqrt(index));

//     index = 0;
// 	while (index <= 20)
// 	{
// 		printf("nombre : %d -- Racine : %d\n", index, ft_sqrt(index));
// 		index++;
// 	}

//     return (0);
// }