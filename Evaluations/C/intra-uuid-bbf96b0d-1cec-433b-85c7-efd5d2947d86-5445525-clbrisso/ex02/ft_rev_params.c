/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:29:54 by clbrisso          #+#    #+#             */
/*   Updated: 2024/01/28 15:46:34 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	write (1, str, ft_strlen(str));
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc -1;
	while (i >= 1)
	{
		ft_putstr(argv[i]);
		i--;
	}
	return (0);
}
