/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:00:12 by amorin            #+#    #+#             */
/*   Updated: 2024/01/20 11:39:31 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size / 2)
	{
		j = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = j;
		i++;
	}
}

int main() 
{
    int arr[] = {14, 22, 357, 44, 51, 26, 76};
    int size = sizeof(arr) / 4;
	
    ft_rev_int_tab(arr, size);
    for (int n = 0; n < size; n++) {
        printf("%d ", arr[n]);
    }

    return 0;
}