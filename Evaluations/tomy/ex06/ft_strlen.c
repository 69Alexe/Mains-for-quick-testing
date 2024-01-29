/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:11:06 by tgravel           #+#    #+#             */
/*   Updated: 2024/01/16 12:36:04 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != 0)
		;
	return (i);
}

int main()
{
	char	string[] = "rotule";
	int longeure = ft_strlen(string);

	printf("nombre de characteres: %d\n", longeure);
	return 0;
}
