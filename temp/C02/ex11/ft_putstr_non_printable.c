/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:55:47 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/20 14:32:27 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(hexa[c / 16]);
		ft_putchar(hexa[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hexa[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = -1;
	while (i++, str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_hexa(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
	}
}
