/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 07:54:13 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/24 11:32:34 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	j;

	if (min < max)
	{
		i = min - 1;
		j = -1;
		array = (int *) malloc((max - min) * sizeof(int));
		while (i++ < max)
			array[j++] = i - 1;
		j = -1;
		while (array[j++] != '\0')
			;
		*range = array;
		return (j - 1);
	}
	else if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
		return (-1);
}

#include <stdio.h>

int main() 
{
    int *result;
    int size;

    int min = 5;
    int max = 12;

    size = ft_ultimate_range(&result, min, max);

    if (size >= 0) {
        printf("Generated array: ");
        for (int i = 0; i < size ; i++) {
            printf("%d ", result[i]);
        }
		printf("%d ", size);
        printf("\n");

        free(result);
    } else if (size == 0) {
        printf("vide.\n");
    } else {
        printf("Error\n");
    }

    return 0;
}
