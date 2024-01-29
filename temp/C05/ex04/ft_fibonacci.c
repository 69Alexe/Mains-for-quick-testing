/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 09:12:25 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/27 15:20:04 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (n);
	}
}

#include <stdio.h>

int main()
{

    int index1 = 0;
    printf("donc %d: %d\n", index1, ft_fibonacci(index1));

    return 0;
}