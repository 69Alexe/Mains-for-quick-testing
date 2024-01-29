/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlessard <mlessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:51:07 by mlessard          #+#    #+#             */
/*   Updated: 2024/01/22 17:00:24 by mlessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] < 127))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "Who ready to party !!!";

// 	ft_str_is_printable(str);
// 	printf("Say 1 if not 0 What do you SAY : %d\n", ft_str_is_printable(str));
// 	return (0);
// }
