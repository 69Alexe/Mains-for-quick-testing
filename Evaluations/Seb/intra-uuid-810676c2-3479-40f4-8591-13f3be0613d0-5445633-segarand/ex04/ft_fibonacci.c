/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:59:13 by segarand          #+#    #+#             */
/*   Updated: 2024/01/27 19:50:05 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>

// int main(void)
// {
//     int index;

//     index = -1;
//     printf("Index : %d -- Result : %d\n", index, ft_fibonacci(index));
//     index = 0;
// 	while (index <= 14)
// 	{
// 		printf("Index : %d -- Result : %d\n", index, ft_fibonacci(index));
// 		index++;
// 	}

//     return (0);
// }