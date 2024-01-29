/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 06:56:21 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/20 14:19:40 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
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
