/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:42:18 by tgravel           #+#    #+#             */
/*   Updated: 2024/01/16 12:47:57 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	smallest;
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		smallest = tab[i];
		j = i;
		while (++j < size)
		{
			if (tab[i] > tab[j])
			{
				smallest = tab[j];
				tab[j] = tab[i];
				tab[i] = smallest;
			}
		}
	}
}

int main() 
{
    int arr[] = {32424, 31731, 42717, 264528, 136429};
    int size = sizeof(arr) / 4;
	
    ft_sort_int_tab(arr, size);
    for (int n = 0; n < size; n++) {
        printf("%d ", arr[n]);
    }

    return 0;
}

int main() 
{
    char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("original: %s\n", test);
    ft_strlowcase(test);
    printf("converti: %s\n", test);

    return 0;
}