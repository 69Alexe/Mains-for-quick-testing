/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:28:32 by mlessard          #+#    #+#             */
/*   Updated: 2024/01/22 19:17:19 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strcpy(char *dest, char *src);

// int	main(void)
// {
// 	char	src[5] = "12345";
// 	char	dest[5] = "";

// 	ft_strcpy(dest, src);
// 	printf("apres the old switcharou dest : %s\n", dest);
// 	return (0);
// }

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
