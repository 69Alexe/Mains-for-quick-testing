/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:33:52 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/20 22:36:33 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;

	i = 0;
	j = 0;
	count = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	while (src[count] != '\0' && i + count + 1 < size)
	{
		dest[i + count] = src[count];
		count++;
	}
	if (i < size)
	{
		dest[i + count] = '\0';
	}
	return (i + j);
}
