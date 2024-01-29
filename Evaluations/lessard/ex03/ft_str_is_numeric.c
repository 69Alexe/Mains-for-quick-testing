/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlessard <mlessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:34:45 by mlessard          #+#    #+#             */
/*   Updated: 2024/01/22 15:57:28 by mlessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_numeric(char *str);

// int	main(void)
// {
// 	char	str[] = "007";

// 	ft_str_is_numeric(str);
// 	printf("The result is : %d\n:)\n", ft_str_is_numeric(str));
// 	return (0);
// }

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 48 && *str <= 57))
			return (0);
		str++;
	}
	return (1);
}
