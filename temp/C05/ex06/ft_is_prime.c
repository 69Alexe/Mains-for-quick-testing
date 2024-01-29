/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:35:06 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/22 15:51:27 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (++i, i != nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
