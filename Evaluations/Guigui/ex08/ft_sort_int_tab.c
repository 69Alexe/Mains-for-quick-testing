/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:22:25 by gubosse           #+#    #+#             */
/*   Updated: 2024/01/16 11:56:16 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int a[], int index)
{
	int	temp;

	temp = a[index];
	a[index] = a[index + 1];
	a[index + 1] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	if (size == 0)
	{
		return ;
	}
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap (tab, i);
		}
		i++;
	}
	ft_sort_int_tab (tab, (size - 1));
}

int main() 
{
    int arr[] = {32424, 31731, 42717, 264528, 136429, -4, 0};
    int size = sizeof(arr) / 4;
	
    ft_sort_int_tab(arr, size);
    for (int n = 0; n < size; n++) {
        printf("%d ", arr[n]);
    }

    return 0;
}
