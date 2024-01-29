/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:21:54 by amorin            #+#    #+#             */
/*   Updated: 2024/01/20 11:18:07 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)

{
	int	tem;

	tem = *a;
	*a = *b;
	*b = tem;
}

/*int main(void)

{
	int a;
    int b;

    a = 7;
    b = 12;
	printf("a = %d, b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    
}
*/