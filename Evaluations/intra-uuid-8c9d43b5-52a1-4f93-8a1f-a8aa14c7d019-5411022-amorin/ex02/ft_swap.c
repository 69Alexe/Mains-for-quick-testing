/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorin <amorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:21:54 by amorin            #+#    #+#             */
/*   Updated: 2024/01/19 10:27:26 by amorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
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