/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onault <onault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:53:56 by onault            #+#    #+#             */
/*   Updated: 2024/01/25 17:08:24 by onault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	long	i;

	i = 2;
	if (nb < 2)
		return (2);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
// 		ft_find_next_prime(2147483638),
// 		ft_find_next_prime(-3) == 2 ? "OK" : "Fail",
// 		ft_find_next_prime(0) == 2 ? "OK" : "Fail",
// 		ft_find_next_prime(1) == 2 ? "OK" : "Fail",
// 		ft_find_next_prime(2) == 2 ? "OK" : "Fail",
// 		ft_find_next_prime(3) == 3 ? "OK" : "Fail",
// 		ft_find_next_prime(4) == 5 ? "OK" : "Fail",
// 		ft_find_next_prime(5) == 5 ? "OK" : "Fail",
// 		ft_find_next_prime(6) == 7 ? "OK" : "Fail",
// 		ft_find_next_prime(7) == 7 ? "OK" : "Fail",
// 		ft_find_next_prime(10) == 11 ? "OK" : "Fail",
// 		ft_find_next_prime(11) == 11 ? "OK" : "Fail",
// 		ft_find_next_prime(13) == 13 ? "OK" : "Fail",
// 		ft_find_next_prime(19) == 19 ? "OK" : "Fail"
//      ) ;
// }