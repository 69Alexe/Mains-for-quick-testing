/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:29:51 by fwu               #+#    #+#             */
/*   Updated: 2024/01/27 22:32:47 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	sqrt = 0;
	while (i < nb)
	{
		if (i * i == nb)
		{
			sqrt = i;
			break ;
		}
		i++;
	}
	return (sqrt);
}

// int main(void)
// {
// 	printf("%d", ft_sqrt(16));
// }
