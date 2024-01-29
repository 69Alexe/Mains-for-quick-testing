/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tagauthi <tagauthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:23:49 by tagauthi          #+#    #+#             */
/*   Updated: 2024/01/11 15:38:41 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i < 58)
	{
		write(1, &i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}

