/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:39:24 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/27 20:38:58 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main() {
	
    char str1[] = "Hello";
    char str2[] = "";
    char str3[] = "World";
    char str4[] = "Hell";
    char str5[] = "Hello, World!";
	
    int result1 = ft_strcmp(str1, str2);
    printf("Result 1: %d\n", result1);

	int rezult1 = strcmp(str1, str2);
    printf("Result 1: %d\n", rezult1);

    int result2 = ft_strcmp(str1, str3);
    printf("Result 2: %d\n", result2); 

	int rezult2 = strcmp(str1, str3);
    printf("Result 1: %d\n", rezult2);

    return 0;
}