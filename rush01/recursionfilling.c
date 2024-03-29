/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursionfilling.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 07:35:22 by grobert           #+#    #+#             */
/*   Updated: 2022/07/25 10:50:12 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkboard(int board[4][4], int *in_num);

int	lookfor0(int board[4][4], int *r, int *c)
{
	*r = 0;
	*c = 0;
	while (*r < 4)
	{
		*c = 0;
		while (*c < 4)
		{
			if (board[*r][*c] == 0)
				return (1);
			*c += 1;
		}
		*r += 1;
	}
	return (0);
}

int	safecol(int board[4][4], int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	saferow(int board[4][4], int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	checksafe(int board[4][4], int r, int c, int num)
{
	if ((saferow(board, r, num))
		&& (safecol(board, c, num) && (board[r][c] == 0)))
		return (1);
	return (0);
}

int	recursionfilling(int board[4][4], int *input)
{
	int	row;
	int	col;
	int	n;

	n = 1;
	if ((lookfor0(board, &row, &col) == 0) && (checkboard(board, input) == 1))
		return (1);
	while (n <= 4)
	{
		if (checksafe(board, row, col, n))
		{
			board[row][col] = n;
			if (recursionfilling(board, input) == 1)
				return (1);
			board[row][col] = 0;
		}
		n++;
	}
	return (0);
}
