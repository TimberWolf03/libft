/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 02:35:38 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/11 03:30:45 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	ctr;
	char			*str;

	ctr = 0;
	if (!s || !f)
		return (0);
	while (s[ctr])
		ctr++;
	str = malloc(sizeof(char) * (ctr + 1));
	if (!str)
		return (0);
	ctr = 0;
	while (s[ctr])
	{
		str[ctr] = f(ctr, s[ctr]);
		ctr++;
	}
	str[ctr] = '\0';
	return (str);
}

/*
#include <stdio.h>
char    ft_increase(unsigned int i, char c)
{
    return ((unsigned int)c + i);
}

int main()
{
    char s[] = "aaaaa";
    printf("%s\n", ft_strmapi(s, ft_increase));
}
*/
