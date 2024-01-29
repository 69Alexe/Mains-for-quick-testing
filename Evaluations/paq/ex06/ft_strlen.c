/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:07:20 by frpaquin          #+#    #+#             */
/*   Updated: 2024/01/16 17:38:01 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{

	char str1[10] = "123456";

	ft_strlen(str1);
	printf("str is %s\n", str1);
	printf("str_len(str1) is: %d", ft_strlen(str1));
	return(0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (i++, str[i] != '\0')
		;
	return (i);
}
