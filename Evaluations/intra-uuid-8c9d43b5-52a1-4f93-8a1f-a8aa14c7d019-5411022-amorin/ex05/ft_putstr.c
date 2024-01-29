/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorin <amorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:19:58 by amorin            #+#    #+#             */
/*   Updated: 2024/01/19 10:28:31 by amorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	p;

	p = 0;
	while (str[p] != '\0')
	{
		p++;
	}
	write(1, str, 4);
}
/*int main(void)
{
	ft_putstr("hey, hey, hey.\n");
	return 0;

}
*/