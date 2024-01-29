/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:11:39 by allegare          #+#    #+#             */
/*   Updated: 2024/01/27 21:05:42 by tlemieux         ###   ########.fr       */
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
	int	o;

	i = argc - 1;
	if (argc > 1)
	{
		while (argv[i] && i > 0)
		{
			o = 0;
			while (argv[i][o] != '\0')
			{
				ft_putchar(argv[i][o]);
				o++;
			}
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
