/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:33:29 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/24 09:59:43 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	e;

	(void) argc ;
	i = 0;
	e = 1;
	while (argv[e])
	{
		i = 0;
		while (argv[e][i])
		{
			ft_putchar(argv[e][i]);
			i++;
		}
		write(1, "\n", 1);
		e ++;
	}
}
