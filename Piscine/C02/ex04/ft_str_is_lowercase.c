/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:05:55 by edblonde          #+#    #+#             */
/*   Updated: 2021/06/14 16:11:08 by edblonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include<stdio.h>
int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}
/*int main(void)
{
	printf("%d", ft_str_is_lowercase("A a 1"));
}
*/
