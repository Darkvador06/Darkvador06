/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edblonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 18:40:04 by edblonde          #+#    #+#             */
/*   Updated: 2021/06/14 18:48:13 by edblonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_chiffre(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_bas(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_maj(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (ft_chiffre(*s) || ft_bas(*s) || ft_maj(*s))
		{
			if (ft_chiffre(*s))
				while (ft_chiffre(s[1]))
					s++;
			else if (ft_bas(*s))
				*s -= 32;
			while (ft_bas(*(++s)) || ft_maj(*s))
				if (ft_maj(*s))
					*s += 32;
		}
		else
			s++;
	}
	return (str);
}
/*int main(void)
{

}
*/
