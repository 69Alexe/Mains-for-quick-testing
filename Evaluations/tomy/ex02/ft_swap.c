/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:06:53 by tgravel           #+#    #+#             */
/*   Updated: 2024/01/16 12:33:11 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main() 
{
    int x = 5;
    int y = 10;

    printf("avant: x = %d, y = %d\n", x, y);

    ft_swap(&x, &y);

    printf("apres: x = %d, y = %d\n", x, y);

    return 0;
}
