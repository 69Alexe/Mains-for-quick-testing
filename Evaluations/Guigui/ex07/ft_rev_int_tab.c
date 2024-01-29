/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:06:19 by gubosse           #+#    #+#             */
/*   Updated: 2024/01/16 11:53:54 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	min;
	int	max;
	int	temp;

	min = 0;
	max = size - 1;
	while (min < (size / 2))
	{
		temp = tab[min];
		tab[min] = tab[max];
		tab[max] = temp;
		min++;
		max--;
	}
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / 4;
	
    ft_rev_int_tab(arr, size);
    for (int n = 0; n < size; n++) {
        printf("%d ", arr[n]);
    }

    return 0;
}
