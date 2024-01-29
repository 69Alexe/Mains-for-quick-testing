/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:46:21 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/27 18:43:07 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *src)
{
	int	i;

	i = -1;
	while (src[i++] != '\0')
		;
	return (i);
}

unsigned int	ft_dupstr(char **dest, char *src)
{
	char	*rt;
	unsigned int	len;
	unsigned int	i;
	
	len = ft_strlen(src);
	rt = (char *) malloc((len + 1) * sizeof(char));
	i = 0;
	while (i < len)
	{
		rt[i] = src[i];
		i ++;
	}
	rt[i] = 0;
	*dest = rt;
	return (len);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str *rt;

	if (ac < 0)
		return (NULL);
	rt = (t_stock_str *) malloc((ac +1) * sizeof(t_stock_str));
	i = 0;
	while (i < ac)
	{
		rt[i].str = av[i];
		rt[i].size = (int) ft_dupstr(&rt[i].copy, rt[i].str);
		i++;
	}
	rt[i].str = 0;
	return (rt);
}
