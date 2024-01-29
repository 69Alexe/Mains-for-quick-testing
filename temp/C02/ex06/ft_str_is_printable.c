/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 06:56:21 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/20 14:26:05 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alpha(char c)
{
	if ((c >= 32) && (c <= 126))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	a;

	a = -1;
	while (++a, str[a] != '\0')
	{
		if (!(alpha(str[a])))
		{
			return (0);
		}
	}
	return (1);
}
