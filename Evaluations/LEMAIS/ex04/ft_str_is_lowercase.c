/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdumais <gdumais-@student.42quebec.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:21:41 by gdumais           #+#    #+#             */
/*   Updated: 2024/01/21 17:56:23 by gdumais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	h;

	h = 0;
	while (str[h] != '\0')
	{
		if (! (str[h] >= 'a' && str[h] <= 'z'))
		{
			return (0);
		}
		h++;
	}
	return (1);
}
