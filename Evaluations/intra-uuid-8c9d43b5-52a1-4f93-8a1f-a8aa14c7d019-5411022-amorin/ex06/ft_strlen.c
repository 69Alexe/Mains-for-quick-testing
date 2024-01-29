/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorin <amorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:32:56 by amorin            #+#    #+#             */
/*   Updated: 2024/01/19 10:30:25 by amorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)

{
	int	u;

	u = 0;
	while (str[u])
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