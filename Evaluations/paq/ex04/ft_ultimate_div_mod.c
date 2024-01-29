/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frpaquin <frpaquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:40:20 by frpaquin          #+#    #+#             */
/*   Updated: 2024/01/16 12:55:45 by frpaquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int int1;
    int int2;

    int1 = 10; 
    int2 = 5;

    ft_ultimate_div_mod( &int1, &int2);
    printf("\n\nint1 is now: %d\nint2 is now: %d\n\n", int1, int2);
    return(0);
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = 0;
	temp2 = 0;
	temp1 = (*a / *b);
	temp2 = (*a % *b);
	*a = temp1;
	*b = temp2;
}
