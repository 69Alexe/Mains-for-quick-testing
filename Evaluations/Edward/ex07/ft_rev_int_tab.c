/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:12:49 by edchavez          #+#    #+#             */
/*   Updated: 2024/01/15 19:29:24 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

int	main(void)
{
	int tab[4] = {0, 1, 2, 3};
	int size = 4 ;

	printf("Avant : %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3]);
	ft_rev_int_tab(tab, size);
	printf("Apres : %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}
