/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgravel <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:42:34 by tgravel           #+#    #+#             */
/*   Updated: 2024/01/18 13:31:27 by tgravel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}
/*
void	ft_putstr(char *str);

int	main(void)
{
	char str1[] = "This should write 3 string\n";
	char str2[] = "The next one a null\n";
	char str3[] = "";
	char str4[] = "and back to string\n";

	ft_putstr(str1);
	ft_putstr(str2);
	ft_putstr(str3);
	ft_putstr(str4);
	return (0);
}*/
