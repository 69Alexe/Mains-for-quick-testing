/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:16:25 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/23 12:04:20 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nb;
	int	isneg;

	nb = 0;
	isneg = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str += 1;
	str --;
	while (str++, *str == '-' || *str == '+')
		if (*str == '-')
			isneg *= -1;
	str --;
	while (str++, *str >= '0' && *str <= '9')
		nb = nb * 10 + (*str - '0');
	return (nb * isneg);
}
