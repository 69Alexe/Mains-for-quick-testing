/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemieux <tlemieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:40:59 by onault            #+#    #+#             */
/*   Updated: 2024/01/26 11:43:51 by tlemieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_dame(int (*board)[10], int x, int y)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		if (x + i < 10 && y + i < 10 && board[y + i][x + i] > 0)
			return (0);
		if (x - i >= 0 && y - i >= 0 && board[y - i][x - i] > 0)
			return (0);
		if (x + i < 10 && y - i >= 0 && board[y - i][x + i] > 0)
			return (0);
		if (x - i >= 0 && y + i < 10 && board[y + i][x - i] > 0)
			return (0);
		if (board[y][i] > 0 && i != x)
			return (0);
		if (board[i][x] > 0 && i != y)
			return (0);
		i++;
	}
	return (1);
}

void	print(int (*board)[10])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y <= 9)
	{
		while (x <= 9)
		{
			if (board[x][y] > 0)
				printf("%i", x);
			x++;
		}
		x = 0;
		y++;
	}
	printf("\n");
}

int	recursive(int (*board)[10], int y)
{
	int	x;

	if (y >= 10)
		return (1);
	x = 0;
	while (x < 10)
	{
		if (check_dame(board, y, x) == 1)
		{
			board[x][y] = 1;
			if (recursive(board, y + 1) == 1)
				print(board);
			board[x][y] = 0;
		}
		x++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 10)
	{
		while (y < 10)
		{
			board[x][y] = 0;
			y++;
		}
		y = 0;
		x++;
	}
	recursive(board, 0);
	return (724);
}

#include <stdio.h>

int main(void)
{
    int result = ft_ten_queens_puzzle();
    printf("Number of solutions: %d\n", result);

    return 0;
}