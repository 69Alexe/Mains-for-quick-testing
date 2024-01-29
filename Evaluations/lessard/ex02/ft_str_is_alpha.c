/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlessard <mlessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:13:43 by mlessard          #+#    #+#             */
/*   Updated: 2024/01/22 17:16:40 by mlessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_alpha(char *str);

// int	main(void)
// {
// 	char	str[] = "WelcomeToTheWarzone";

// 	ft_str_is_alpha(str);
// 	printf("The result is : %d\n:)\n", ft_str_is_alpha(str));
// 	return (0);
// }

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 65 && *str <= 90) && !(*str >= 97 && *str <= 122))
			return (0);
		str++;
	}
	return (1);
}
