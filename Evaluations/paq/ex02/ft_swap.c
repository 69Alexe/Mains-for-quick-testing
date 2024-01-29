/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frpaquin <frpaquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:15:14 by frpaquin          #+#    #+#             */
/*   Updated: 2024/01/16 12:57:18 by frpaquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
    int a;
    int b;

    a = 1;
    b = 2;
    
    printf("int a start: %d\n", a);
    printf("int b start: %d\n", b);
    printf("&a is: %p\n", &a);
    printf("&b is: %p\n\n", &b);
    
    ft_swap(&a, &b);
    
    printf("end of fonction!!!\n\n");
    printf("int a after: %d\n", a);
    printf("int b after: %d\n\n", b);

    return(0);
}
*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
