/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorin <amorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:07:57 by amorin            #+#    #+#             */
/*   Updated: 2024/01/19 10:29:44 by amorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int a;
	int b;
	int div, mod;

	a = 10;
	b = 2;
	printf("a = %d, b = %d\n", a, b);
	ft_div_mod(a, b, &mod, &div);
	printf("div = %d, mod = %d\n", div, mod);
}
*/