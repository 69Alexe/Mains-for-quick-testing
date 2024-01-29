/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saguayo- <saguayo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:57:43 by saguayo-          #+#    #+#             */
/*   Updated: 2024/01/18 16:31:47 by saguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	count;

	result = 1;
	count = 0;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (count < power)
	{
		result *= nb;
		count++;
	}
	return (result);
}
