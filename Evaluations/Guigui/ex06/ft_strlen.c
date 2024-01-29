/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:57:11 by gubosse           #+#    #+#             */
/*   Updated: 2024/01/16 11:51:10 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++ != 0)
	{
		i++;
	}
	return (i);
}

int main()
{
	char	string[] = "rotule";
	int longeure = ft_strlen(string);

	printf("nombre de characteres: %d\n", longeure);
	return 0;
}