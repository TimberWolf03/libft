/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:59:36 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/11 00:20:37 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	ctr;

	ctr = 0;
	if (!s || !f)
		return ;
	while (s[ctr])
	{
		f(ctr, &s[ctr]);
		ctr++;
	}
}

/*
same like strmapi but manipulating values the variables in main functions from 
helper function without return value by accepting pointer as input parameter 
and deferencing pointers

#include <stdio.h>
void    ft_increase(unsigned int i, char *c)
{
    *c = (unsigned int)*c + i;
}

int main()
{
    char s[] = "aaaaa";
	ft_striteri(s, ft_increase);
    printf("%s\n", s);
}
*/