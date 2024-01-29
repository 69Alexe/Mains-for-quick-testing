/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:48:55 by gachalif          #+#    #+#             */
/*   Updated: 2024/01/15 19:52:59 by gachalif         ###   ########.fr       */
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
	ft_putstr(argV[0]);
}
