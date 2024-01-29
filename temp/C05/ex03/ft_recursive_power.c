/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 08:55:20 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/22 15:48:58 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (res > res * nb)
		return (0);
	else if (power > 0)
		return (nb * ft_recursive_power(res, power -1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (res);
}
