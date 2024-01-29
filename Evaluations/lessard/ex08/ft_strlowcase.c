/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlessard <mlessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:51:28 by mlessard          #+#    #+#             */
/*   Updated: 2024/01/22 16:29:57 by mlessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if
		(str[i] >= 65 && str[i] <= 90)
			str[i] = (str[i] + 32);
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "BATMAN";

// 	printf("You know who's in fucking Gotham : %s\n", ft_strlowcase(str));
// 	return (0);
// }
