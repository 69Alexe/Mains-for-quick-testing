/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etgaudet <etgaudet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:27:55 by etgaudet          #+#    #+#             */
/*   Updated: 2024/01/15 14:41:52 by etgaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	short	c;

	c = 122;
	while (c > 96)
	{
		write (1, &c, 1);
		--c;
	}
}
