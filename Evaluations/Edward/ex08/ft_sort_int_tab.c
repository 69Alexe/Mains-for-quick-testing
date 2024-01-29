/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:12:49 by edchavez          #+#    #+#             */
/*   Updated: 2024/01/15 19:31:19 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}

int	main(void)
{
	int	tab[4] = {1324, 634141, -4, 0};
	int	size = 4;

	printf("Avant : %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3]);
	ft_sort_int_tab(tab, size);
	printf("Apres : %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}
