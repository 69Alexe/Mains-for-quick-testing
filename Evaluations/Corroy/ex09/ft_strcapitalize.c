/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:34:10 by rcorroy           #+#    #+#             */
/*   Updated: 2024/01/20 23:53:09 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (str[l] >= 'A' && str[l] <= 'Z')
		{
			str[l] = str[l] + 32;
		}
		l++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	newword;

	i = 0;
	newword = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (newword && str[i] >= 'a')
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					str[i] = str[i] - ('a' - 'A');
			}
			newword = 0;
		}
		else
			newword = 1;
		i++;
	}
	return (0);
}
