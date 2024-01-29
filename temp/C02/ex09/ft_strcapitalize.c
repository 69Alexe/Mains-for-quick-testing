/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:21:21 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/20 21:48:28 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	a;
	char			c;
	int				start;

	a = 0;
	start = 1;
	while (str[a] != '\0')
	{
		c = str[a];
		if (start == 1 && c >= 'a' && c <= 'z')
			str[a] = str[a] - 32;
		else if (start == 0 && c >= 'A' && c <= 'Z')
			str[a] = str[a] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			start = 1;
		else
			start = 0;
		a++;
	}
	return (str);
}
