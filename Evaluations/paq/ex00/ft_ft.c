/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frpaquin <frpaquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:15:07 by frpaquin          #+#    #+#             */
/*   Updated: 2024/01/16 12:56:39 by frpaquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void ft_ft(int *nbr);

int main()
{

	int a;
	int *ptr1;

	a = 5;
	ptr1 = &a;

	printf("\n\nint a: %d %p\n", a);
	printf("ptr1: %d   %p\n", ptr1);

	ft_ft(ptr1);
	printf("ft_ft: %d\n", a);

	return(0);
}
*/
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
