/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chang-pa <changgyu@yonsei.ac.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:50:37 by chang-pa          #+#    #+#             */
/*   Updated: 2024/01/11 17:01:24 by chang-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int	main(int ac, char **av)
// {
// 	ac = 0;
// 	av[0][0] = 0;
// 	printf("%d\n", ft_strcmp(av[1], av[2]));
// 	printf("%d\n", strcmp(av[1], av[2]));
// 	return (1);
// }
