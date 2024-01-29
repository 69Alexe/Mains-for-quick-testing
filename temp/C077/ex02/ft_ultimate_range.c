/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 07:54:13 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/25 17:33:44 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	j;

	if (min < max)
	{
		j = 0;
		array = (int *) malloc((max - min) * sizeof(int));
		while (min < max)
			array[j++] = min++;
		*range = array;
		return (j);
	}
	else if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
		return (-1);
}

int main()
{
    int *result;
    int size;
    int min = 6;
    int max = 7;

    size = ft_ultimate_range(&result, min, max);

    if (size >= 0)
    {
        printf("Array: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", result[i]);
        }
		printf("%d\n", size);
        free(result);
    }
    else
    {
        printf("Invalid range\n");
    }

    return 0;
}