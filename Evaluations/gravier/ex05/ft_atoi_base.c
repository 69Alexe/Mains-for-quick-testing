/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:35:04 by tgravel           #+#    #+#             */
/*   Updated: 2024/01/27 18:49:53 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_size(char *base)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (base[i++])
		size++;
	return (size);
}

int	ft_isnotbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == 32
			|| (base[i] >= 9 && base[i] <= 13))
			return (1);
		while (base[j])
			if (base[i] == base[j++])
				return (1);
		i++;
		j = i + 1;
	}
	if (i < 2)
		return (1);
	return (0);
}

int	ft_calcul_nbr(char *str, char *base, int i)
{
	int	j;
	int	nbr;
	int	size;

	j = 0;
	nbr = 0;
	size = ft_base_size(base);
	while (str[i])
	{
		while (base[j])
		{
			if (str[i] == base[j++])
			{
				nbr *= size;
				nbr += j - 1;
				break ;
			}
			if (base[j] == 0)
				return (nbr);
		}
		i++;
		j = 0;
	}
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nbr;
	int	negative;

	i = 0;
	negative = 1;
	if (ft_isnotbase(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			negative *= -1;
	nbr = ft_calcul_nbr(str, base, i);
	return (nbr * negative);
}
/*
#include <stdio.h>

int	main(void)
{
	char	base[] = "0123456789abcdef";
	char	str[] = "    ---+--+7fffffffk1";
	int		result = 0;

	result = ft_atoi_base(str, base);
	printf("%d", result);
	return (0);
}*/
