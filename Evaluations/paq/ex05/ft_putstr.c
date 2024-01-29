/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:15:06 by frpaquin          #+#    #+#             */
/*   Updated: 2024/01/16 17:35:53 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void ft_putstr(char *str);

int main(void)
{
    char str1[15] = "abcdef";
    ft_putstr(str1);
    return(0);
}
*/
void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (i++, str[i] != '\0')
	{
		write(1, &str[i], 1);
	}
}
