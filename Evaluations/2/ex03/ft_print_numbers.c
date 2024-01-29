/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:15:44 by etgaudet          #+#    #+#             */
/*   Updated: 2024/01/15 20:03:06 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	char	n; 

	n = 48;
	while (n < 58)
	{
		write (1, &n, 1);
		n++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return 0;
}