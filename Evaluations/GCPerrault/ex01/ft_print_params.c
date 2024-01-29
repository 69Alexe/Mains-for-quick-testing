/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:50:51 by gperreau          #+#    #+#             */
/*   Updated: 2024/01/24 10:39:20 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (c < argc)
	{
		while (argv[c][i])
		{
			write(1, &argv[c][i], 1);
			i++;
		}
		write (1, "\n", 1);
		i = 0;
		c++;
	}
}
