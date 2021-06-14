/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 17:08:26 by edblonde          #+#    #+#             */
/*   Updated: 2021/06/14 18:34:51 by edblonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*int main(void)
{
	char a[]= "QQQQHHHQ";
printf("%s", ft_strlowcase(a));
}
*/
