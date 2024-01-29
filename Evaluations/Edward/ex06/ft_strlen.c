/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:12:49 by edchavez          #+#    #+#             */
/*   Updated: 2024/01/15 19:26:07 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		write (1, &str[count], 1);
		count++;
	}
	return (count);
}

int	main(void)
{
	char chaine[] = "Bonjour ceci est l'exercise06";
	int longueur = ft_strlen(chaine);
	printf("La longueur de la chaîne est : %d\n", longueur);
	return (0);
}
