/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frpaquin <frpaquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:15:26 by frpaquin          #+#    #+#             */
/*   Updated: 2024/01/16 12:57:25 by frpaquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int int1;
    int int2;
    int div_result;
    int mod_result;
   
    int1 = 5; 
    int2 = 2;
    div_result = 0;
    mod_result = 0;


    ft_div_mod(int1, int2, &div_result, &mod_result);
    printf("div_result: %d\n", div_result);
    printf("mod_result: %d\n", mod_result);
    return(0);
}
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
