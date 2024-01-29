/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorroy <rcorroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 22:29:15 by rcorroy           #+#    #+#             */
/*   Updated: 2024/01/20 22:44:30 by rcorroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (size > 1 && src[i] != '0')
	{
		dest[i] = src[i];
		--size;
		++i;
	}
	if (size != 0)
	{
		dest[i] = '\0';
	}
	while (src[j])
	{
		++j;
	}
	return (j);
}

// int	main(void)
// {
// 	unsigned size = 4;
// 	char	src[] = "Bonbon";
// 	char	dest[] = "chicha";
// 	printf("%s\n", dest);
// 	ft_strlcpy(dest, src, size);
// 	printf("%s\n", dest);
// 	return 0;
// }