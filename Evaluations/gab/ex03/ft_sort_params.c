/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:55:00 by gachalif          #+#    #+#             */
/*   Updated: 2024/01/15 20:01:22 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char	*str1, char	*str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}

static void	ft_swap_str_tab(char **tab, int a, int b)
{
	char	*temp;

	temp = tab[a];
	tab[a] = tab[b];
	tab[b] = temp;
}

void	ft_sort_str_tab(char **tab, int size)
{
	int	i;
	int	was_swapped;

	i = 1;
	was_swapped = 1;
	while (was_swapped == 1)
	{
		was_swapped = 0;
		i = 1;
		while (i < size - 1) 
		{
			if (ft_strcmp(tab[i], tab[i + 1]) < 0)
			{
				was_swapped = 1;
				ft_swap_str_tab(tab, i, i + 1);
			}
			i++;
		}
	}
}

static void	ft_putstr(char *str)
{
	while (str[0] != 0)
		write(1, str++, 1);
}

int	main(int argC, char **argV)
{
	int	i;

	ft_sort_str_tab(argV, argC);
	i = 1;
	while (i < argC)
	{
		ft_putstr(argV[argC - i++]);
		write(1, "\n", 1);
	}
}
