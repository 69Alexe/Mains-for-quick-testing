/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:12:49 by edchavez          #+#    #+#             */
/*   Updated: 2024/01/15 19:21:33 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	xtmp;
	int	ytmp;

	xtmp = *a;
	ytmp = *b;
	*a = xtmp / ytmp;
	*b = xtmp % ytmp;
}

int	main()
{
	int	a;
	int	b;

	a = 15;
	b = 4;
	printf("Avant l'appel: a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Après l'appel: a = %d, b = %d", a, b);
	return (0);
}
