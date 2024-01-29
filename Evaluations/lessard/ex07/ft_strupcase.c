/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlessard <mlessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:58:37 by mlessard          #+#    #+#             */
/*   Updated: 2024/01/22 17:00:29 by mlessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 || 122 <= str[i])
			str[i] = (str[i] - 32);
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "allo";

// 	ft_strupcase(str);
// 	printf ("what ever u want daddy : %s\n", ft_strupcase(str));
// 	return (0);
// }
