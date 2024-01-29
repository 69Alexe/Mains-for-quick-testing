/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:05:10 by tgravel           #+#    #+#             */
/*   Updated: 2024/01/27 18:48:20 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	neg;

	i = 0;
	nbr = 0;
	neg = 1;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i])
		i++;
	while ((str[i] == '-' || str[i] == '+'))
		if (str[i++] == '-')
			neg *= -1;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - '0');
	return (nbr * neg);
}
/*

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	str[] = "   ---+--+01234ab567";
	char	str2[] = "1";
	int		nbr;

	nbr = ft_atoi(str);
	if (nbr == -1234)
		write(1, "pass\n", 5);
	printf("%d", nbr);
	return (0);
}*/
