/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfongang <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:49:56 by nfongang          #+#    #+#             */
/*   Updated: 2024/01/23 12:54:47 by nfongang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	char	char_actuel;
	int		i;
	int		retour;

	i = 0;
	retour = 1;
	while (str[i] != '\0')
	{
		char_actuel = *(str + i);
		if (char_actuel < 65 || (char_actuel > 90
				&& char_actuel < 97) || char_actuel > 122)
		{
			retour = 0;
		}
		i++;
	}
	return (retour);
}
