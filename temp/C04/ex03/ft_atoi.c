/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:16:25 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/21 02:14:52 by tlemieux         ###   ########.fr       */
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
	while (*str == '-' || *str == '+')
	{
		if (isneg == 1 && *str == '-')
			isneg = -1;
		else if (isneg == -1 && *str == '-')
			isneg = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str += 1;
	}
	return (nb * isneg);
}
