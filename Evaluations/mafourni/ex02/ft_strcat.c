/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:43:53 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/20 16:55:43 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i ++;
	while (src[j])
	{
		dest[i ++] = src[j];
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char dest [500] = "Coucou";
	char src [] = "La Team";
	printf("Oe :%s\n", ft_strcat(dest, src));
}
