/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:02:48 by tlemieux          #+#    #+#             */
/*   Updated: 2024/01/29 17:28:34 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	seperator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
		{
			return (1);
		}
		charset++;
	}
	return (0);
}

int	count(char *str, char *charset)
{
	int	count = 0;
	int	in_word = 0;

	while (*str)
	{
		if (!seperator(*str, charset))
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
			else
			{
				in_word = 0;
			}

		}
		str++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int	wordcount;
	char **array;

	wordcount = count(str, charset);
	array = (char **) malloc((wordcount) * sizeof(char *) + 1);
	if (!array)
		return(NULL);
	
}

int main() 
{
    char str[] = "This,is,a,test,string";
    char charset[] = ",";

    char **result = ft_split(str, charset);

    int i = 0;
    while (result[i] != NULL) {
        printf("%s\n", result[i]);
        i++;
    }
    free(result);
    return (0);
}