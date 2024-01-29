/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:41:51 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/24 13:07:10 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat;
	int		i;
	int		nb;
	int		nbsep;

	i = -1;
	nb = 0;
	nbsep = 0;
	while (i++, i < size)
		nb = nb + ft_strlen(strs[i]);
	nbsep = ft_strlen(sep);
	cat = (char *) malloc((nbsep * (size)) + nb);
	i = -1;
	while (i++, i < size)
	{
		cat = ft_strcat(cat, strs[i]);
		if (i != size -1 && nbsep != 0)
			cat = ft_strcat(cat, sep);
	}
	return (cat);
}
