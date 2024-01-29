/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:20:54 by chang-pa          #+#    #+#             */
/*   Updated: 2024/01/27 15:37:09 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	check_dup(char c, char *charset)
{
	unsigned int	i;

	i = 0;
	while (charset[i] != 0)
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

unsigned int	count_words(char *str, char *charset, unsigned int *val)
{
	unsigned int	count;

	count = 0;
	while (str[val[0]] != 0)
	{
		val[2] = check_dup(*(str + val[0]), charset);
		if (val[2] > 0 && val[1] > 0)
			val[1] = 0;
		if (val[2] > 0)
			val[2]--;
		else
			val[1]++;
		if (val[1] == 1)
			count++;
		val[0]++;
	}
	return (count);
}

char	*dup_str(char *str, unsigned int idx, unsigned int len)
{
	unsigned int	i;
	char			*rt;

	rt = (char *) malloc(len * (char) + 1);
	i = 0;
	while (i < len)
	{
		rt[i] = str[idx + i];
		i++;
	}
	rt[i] = 0;
	return (rt);
}

void	get_strs(char *str, char *charset, char **rt, unsigned int *val)
{
	while (str[val[0]] != 0)
	{
		val[2] = check_dup(*(str + val[0]), charset);
		if (val[2] > 0 && val[1] > 0)
		{
			*rt = dup_str(str, val[0] - val[1], val[1]);
			val[1] = 0;
			rt++;
		}
		if (val[2] > 0)
			val[2]--;
		else
			val[1]++;
		val[0]++;
	}
	if (val[1] > 0)
		*rt = dup_str(str, val[0] - val[1], val[1]);
}

char	**ft_split(char *str, char *charset)
{
	unsigned int	array_size;
	char			**rt;
	unsigned int	val[3];

	val[0] = 0;
	val[1] = 0;
	val[2] = 0;
	array_size = count_words(str, charset, val);
	rt = (char **) malloc(array_size * sizeof(char *) + 1);
	if (rt == NULL)
		return (NULL);
	rt[array_size] = 0;
	val[0] = 0;
	val[1] = 0;
	val[2] = 0;
	get_strs(str, charset, rt, val);
	return (rt);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	unsigned int	i;
	char			**rt;

	ac = 0;
	rt = ft_split(av[1], av[2]);
	i = 0;
	while (rt[i])
	{
		printf("%s\n", rt[i]);
		i++;
	}
	return (1);
}
