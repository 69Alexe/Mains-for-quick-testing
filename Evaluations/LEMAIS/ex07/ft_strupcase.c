/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:49:37 by gdumais           #+#    #+#             */
/*   Updated: 2024/01/23 11:18:07 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = -1;
	while (a++, str[a] != '\0')
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
	return (str);
}
