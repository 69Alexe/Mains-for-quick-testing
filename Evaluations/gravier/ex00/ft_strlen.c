/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgravel <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:32:11 by tgravel           #+#    #+#             */
/*   Updated: 2024/01/18 11:43:25 by tgravel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <unistd.h>

int	ft_strlen(char *str);

int	main()
{
	char str[] = "1234567890";
	int i = ft_strlen(str);

	if (i == 10)
		write(1, "pass", 4);
	return (0);
}*/
