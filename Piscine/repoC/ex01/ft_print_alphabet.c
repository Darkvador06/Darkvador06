/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 08:49:03 by edblonde          #+#    #+#             */
/*   Updated: 2021/06/03 15:43:24 by edblonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_alphabet(void)
{	
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
Int main ()
{
ft_print_alphabet();
}