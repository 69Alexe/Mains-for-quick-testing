/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:48:55 by gachalif          #+#    #+#             */
/*   Updated: 2024/01/15 19:54:23 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putstr(char *str)
{
	while (str[0] != 0)
		write(1, str++, 1);
}

int	main(int argC, char **argV)
{
	int	i;

	i = 1;
	while (i < argC)
	{
		ft_putstr(argV[argC - i++]);
		write(1, "\n", 1);
	}
}
