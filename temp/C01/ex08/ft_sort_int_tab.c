/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:22:30 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/15 18:19:36 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	aa;
	int	bb;

	aa = 1;
	while (aa < size)
	{
		bb = aa;
		while (bb > 0 && *(tab + bb - 1) > *(tab + bb))
		{
			ft_swap(tab + bb, tab + bb - 1);
			bb--;
		}
		aa++;
	}
}
