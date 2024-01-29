/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:10:18 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/24 11:07:31 by tlemieux         ###   ########.fr       */
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

	if (argc > 1)
	{
		while (argv[argc - 1] && argc - 1 > 0)
		{
			i = 0;
			while (argv[argc - 1][i])
				ft_putchar(argv[argc - 1][i]);
			write(1, "\n", 1);
			argc --;
		}
	}
	return (0);
}
