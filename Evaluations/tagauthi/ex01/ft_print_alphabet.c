/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tagauthi <tagauthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:11:54 by tagauthi          #+#    #+#             */
/*   Updated: 2024/01/11 15:35:18 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i < 123)
	{
		write(1, &i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
