/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:50:53 by gperreau          #+#    #+#             */
/*   Updated: 2024/01/24 10:40:22 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 0;
	c = argc - 1;
	while (c > 0)
	{
		while (argv[c][i])
		{
			write(1, &argv[c][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		c--;
	}
}
