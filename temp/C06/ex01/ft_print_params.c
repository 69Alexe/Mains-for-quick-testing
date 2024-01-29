/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 05:38:12 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/21 05:47:57 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char *str)
{
	unsigned int	a;

	a = -1;
	while (a++, str[a] != '\0')
	{
		ft_putchar(str[a]);
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	if (argc > 1)
	{
		j = argc;
		while (i++, argv[i] != argv[j])
			ft_print_params(argv[i]);
	}
	return (0);
}
