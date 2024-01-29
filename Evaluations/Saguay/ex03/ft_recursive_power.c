/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguayo- <saguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:23:57 by saguayo-          #+#    #+#             */
/*   Updated: 2024/01/18 16:31:50 by saguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;
	int	count;

	result = 1;
	count = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = (nb * ft_recursive_power(nb, power - 1));
	return (result);
}
