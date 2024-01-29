/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edchavez <edchavezbenalcazar@hotmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:12:49 by edchavez          #+#    #+#             */
/*   Updated: 2024/01/15 16:42:54 by edchavez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main()
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 675;
// 	b = 4;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("Seulement la division: a = %d, b = %d, div = %d\n", a, b, div);
// 	printf("Reste de la division: a = %d, b = %d, mod = %d", a, b, mod);
// 	return (0);
// }
