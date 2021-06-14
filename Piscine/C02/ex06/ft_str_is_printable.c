/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:52:32 by edblonde          #+#    #+#             */
/*   Updated: 2021/06/14 16:57:27 by edblonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
			return (0);
		str++;
	}
	return (1);
}
/*int main(void)
{
printf("%d", ft_str_is_printable("333"));
}
*/
