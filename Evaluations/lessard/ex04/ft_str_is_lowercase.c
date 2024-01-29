/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlessard <mlessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:58:23 by mlessard          #+#    #+#             */
/*   Updated: 2024/01/22 15:55:11 by mlessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_lowercase(char *str);

// int	main(void)
// {
// 	char	*str = "abcde";

// 	ft_str_is_lowercase(str);
// 	printf("THE ANSWER IS : %d\n", ft_str_is_lowercase(str));
// 	return (0);
// }

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 97 && *str <= 122))
			return (0);
		str++;
	}
	return (1);
}
