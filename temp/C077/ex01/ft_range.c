/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 07:18:40 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/24 12:47:29 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	j;

	if (min < max)
	{
		j = 0;
		array = (int *) malloc((max - min) * sizeof(int));
		while (min < max)
			array[j++] = min++;
		return (array);
	}
	else
		return (NULL);
}
