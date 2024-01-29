/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:55:53 by gubosse           #+#    #+#             */
/*   Updated: 2024/01/16 11:48:58 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_mod;
	int	temp_div;

	temp_mod = *a % *b;
	temp_div = *a / *b;
	*a = temp_div;
	*b = temp_mod;
}
