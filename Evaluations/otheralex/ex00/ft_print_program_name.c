/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_program_name.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:55:17 by allegare          #+#    #+#             */
/*   Updated: 2024/01/23 15:17:14 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	o;

	(void)argc;
	o = 0;
	while (argv[0][o] != '\0')
	{
		putchar(argv[0][o]);
		o++;
	}
	write(1, "\n", 1);
}
