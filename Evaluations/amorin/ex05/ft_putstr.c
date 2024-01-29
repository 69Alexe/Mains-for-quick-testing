/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:19:58 by amorin            #+#    #+#             */
/*   Updated: 2024/01/20 11:22:22 by tlemieux         ###   ########.fr       */
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

int	main(void)
{
	char	*str = "rotule";
	
	ft_putstr(str);
	return (0);
}