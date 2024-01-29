/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 05:30:04 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/22 19:31:11 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_program_name(char *str)
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
	if (argc > 0)
		ft_print_program_name(argv[0]);
	return (0);
}
