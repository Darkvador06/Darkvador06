/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfraixe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:42:54 by cfraixe           #+#    #+#             */
/*   Updated: 2021/06/06 13:34:13 by cfraixe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int	i, int	j, int	x, int	y) // j ligne et i col 
{
	if ((i == 1 && j == 1) || (i == 1 && j == y))
		write(1, "A", 1);
	else if ((i == x && j == 1) || (i == x && j == y))
		write(1, "C", 1);
	else if (i != 1 && i != x && j == 1 || j == y)
		write(1, "B", 1);
	else if (j != 1 && j != y && i == 1 || i == x)
		write(1, "B", 1);
		else
		write(1, " ", 1);
}
