/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_ultimate_ft.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frpaquin <frpaquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:34:58 by frpaquin          #+#    #+#             */
/*   Updated: 2024/01/16 12:55:54 by frpaquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void ft_ultimate_ft(int *********ptr);

int main()
{
    int a; 
    int *ptr1;                          
	int **ptr2;
    int ***ptr3;
    int ****ptr4;
    int *****ptr5;
    int ******ptr6;
    int *******ptr7;
    int ********ptr8;
    int *********ptr9;

    a = 5;

    ptr1 = &a;                      
	ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;
    ptr7 = &ptr6;
    ptr8 = &ptr7;
    ptr9 = &ptr8;  

    printf("\na is:  %d  %p\n\n", a, &a);                 
	printf("ptr1: %d  point to: %p\n", *ptr1, ptr1);             
	printf("&ptr1 is: %p\n\n", &ptr1);
    printf("ptr2: %d  point to: %p\n", **ptr2, ptr2);
    printf("&ptr2 is: %p\n\n", &ptr2);
    printf("ptr3: %d  point to: %p\n", ***ptr3, ptr3);
    printf("&ptr3 is: %p\n\n", &ptr3);
    printf("ptr4: %d  point to: %p\n", ****ptr4, ptr4);
    printf("&ptr4 is: %p\n\n", &ptr4);
    printf("ptr5: %d  point to: %p\n", *****ptr5, ptr5);
    printf("&ptr5 is: %p\n\n", &ptr5);
    printf("ptr6: %d  point to:%p\n", ******ptr6, ptr6);
    printf("&ptr6 is: %p\n\n", &ptr6);
    printf("ptr7: %d  point to:%p\n", *******ptr7, ptr7);
    printf("&ptr7 is: %p\n\n", &ptr7);
    printf("ptr8: %d  point to:%p\n", ********ptr8, ptr8);
    printf("&ptr8 is: %p\n\n", &ptr8);
    printf("ptr9: %d  point to:%p\n", *********ptr9, ptr9); 
    printf("&ptr9 is: %p\n\n", &ptr9);
    ft_ultimate_ft(ptr9);                           
	printf("a is now: %d\n", a);                       
	return(0);
}
*/
void	ft_ultimate_ft(int *********ptr)
{
	*********ptr = 42;
}
