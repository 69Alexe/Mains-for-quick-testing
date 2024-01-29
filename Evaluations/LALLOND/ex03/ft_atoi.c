/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:18:19 by jolalond          #+#    #+#             */
/*   Updated: 2024/01/22 16:37:38 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int		parity;
	int		number;

	number = 0;
	parity = number;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10 + (*str - '0');
		++str;
	}
	if (!(parity % 2))
		return (number);
	return (-number);
}

// int	main(void)
// {
// 	char	*s = "   ---+--+1234ab567";

// 	printf("%d\n", ft_atoi(s));
// }
