/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorin <amorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:27:10 by amorin            #+#    #+#             */
/*   Updated: 2024/01/19 10:30:08 by amorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a;
	*a = div / *b;
	*b = div % *b;
}

/*#include <stdio.h>
int main(void)
{
	int a;
	int b;

	a = 15;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("gdf %d, %d", a, b);
	return 0;

}
*/