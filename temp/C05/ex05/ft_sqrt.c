/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:06:36 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/22 15:50:41 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	if (nb > 0)
	{
		while (a * a <= nb)
		{
			if (a * a == nb)
				return (a);
			if (a > 46340)
				return (0);
			a++;
		}
	}
	return (0);
}
