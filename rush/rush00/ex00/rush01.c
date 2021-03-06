/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:12:29 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/07 13:47:34 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_abc(int lin_cursor, int col_cursor, int x, int y)
{
	if (col_cursor == 1 && (lin_cursor > 1 && lin_cursor < x))
		ft_putchar('*');
	else if (col_cursor == y && (lin_cursor > 1 && lin_cursor < x))
		ft_putchar('*');
	else if (lin_cursor == 1 && (col_cursor != y && col_cursor != 1))
		ft_putchar('*');
	else if (lin_cursor == x && (col_cursor != y && col_cursor != 1))
		ft_putchar('*');
	else if (col_cursor == 1 && lin_cursor == 1)
		ft_putchar('/');
	else if (col_cursor == y && lin_cursor == x)
		ft_putchar('/');
	else if (col_cursor == 1 && lin_cursor == x)
		ft_putchar(92);
	else if (col_cursor == y && lin_cursor == 1)
		ft_putchar(92);
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int lin_cursor;
	int col_cursor;

	col_cursor = 1;
	lin_cursor = 1;
	while (col_cursor <= y)
	{
		while (lin_cursor <= x)
		{
			print_abc(lin_cursor, col_cursor, x, y);
			lin_cursor++;
		}
		if (x != 0)
			ft_putchar('\n');
		col_cursor++;
		lin_cursor = 1;
	}
}
