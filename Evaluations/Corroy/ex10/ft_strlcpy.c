/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 22:29:15 by rcorroy           #+#    #+#             */
/*   Updated: 2024/01/20 23:42:59 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (size > 1 && src[i] != '0')
	{
		dest[i] = src[i];
		--size;
		++i;
	}
	if (size != 0)
	{
		dest[i] = '\0';
	}
	while (src[j])
	{
		++j;
	}
	return (j);
}

#include <stdio.h>

int main() 
{
    char source[] = "Rotules flamboyantes";
    char destination[20];

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    unsigned int longueure = ft_strlcpy(destination, source, sizeof(destination));

    printf("Destination apres: %s\n", destination);
    printf("longueure: %u\n", longueure);

    return 0;
}
