/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tagauthi <tagauthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:36:31 by tagauthi          #+#    #+#             */
/*   Updated: 2024/01/22 13:54:32 by tagauthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = ac - 1;
		while (i > 0)
		{
			ft_print_params(av[i]);
			i--;
		}
	}
	return (0);
}
