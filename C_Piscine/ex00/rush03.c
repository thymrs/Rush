/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 11:07:03 by perattan          #+#    #+#             */
/*   Updated: 2025/07/12 11:10:04 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
	{
		return;					 
	}
	row = 1;
		while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if	((col == 1 && row == 1) || (col == 1 && row == y))
			{
				ft_putchar('A');
			}
			else if ((col == x && row == 1) || (col == x && row == y))
			{
				ft_putchar('C');
			}
			else if ((col == 1 || col == x) || row == 1 || row == y)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
