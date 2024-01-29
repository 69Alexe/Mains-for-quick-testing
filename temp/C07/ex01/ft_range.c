/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 07:18:40 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/24 11:41:40 by tlemieux         ###   ########.fr       */
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
		{
			array[j] = min;
			j++;
			min++;
		}
		return (array);
	}
	else
		return (NULL);
}

#include <stdio.h>

int main() {
    int min = 0;
    int max = 4;

    int *result = ft_range(min, max);

    if (result != NULL) {
        printf("Array: ");
        for (int i = 0; i < max - min; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
    } else {
        printf("Invalid\n");
    }

    return 0;
}