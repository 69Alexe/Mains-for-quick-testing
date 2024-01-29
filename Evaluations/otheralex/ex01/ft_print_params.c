/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:18:50 by allegare          #+#    #+#             */
/*   Updated: 2024/01/23 15:52:28 by allegare         ###   ########.fr       */
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

	(void)argc;
	i = 1;
	while (argv[i])
	{
		o = 0;
		while (argv[i][o] != '\0')
		{
			ft_putchar(argv[i][o]);
			o++;
		}
		i++;
		ft_putchar('\n');
	}
}
