/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:32:56 by amorin            #+#    #+#             */
/*   Updated: 2024/01/20 11:25:43 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	u;

	u = 0;
	while (str[u] != '\0')
	{
		u++;
	}
	return (u);
}

/*int main(void)

{
	int len;
	len = ft_strlen("mamba jamga");
	printf("%d sheesh", len);
	return (0);
}
*/