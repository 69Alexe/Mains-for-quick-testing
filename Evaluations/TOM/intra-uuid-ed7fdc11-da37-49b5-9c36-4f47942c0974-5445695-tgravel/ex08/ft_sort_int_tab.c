/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:42:18 by tgravel           #+#    #+#             */
/*   Updated: 2024/01/27 21:48:39 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	smallest;
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		smallest = tab[i];
		j = i;
		while (++j < size)
		{
			if (tab[i] > tab[j])
			{
				smallest = tab[j];
				tab[j] = tab[i];
				tab[i] = smallest;
			}
		}
	}
}
