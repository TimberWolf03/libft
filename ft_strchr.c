/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:41:50 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/11 03:01:35 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	unsigned char	temp;

	temp = c;
	while (*str != temp)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return (str);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char s[] = "tripouille";
	printf("%s\n", ft_strchr(s, 't'));
	printf("%s\n", strchr(s, 't'));
}
*/

/*
Function return pointer to the first occurence of the char we wanna search.
We can't put while loop condition as equal to null as what if the char searched 
itself is null. Thus flip the position of null return and string pointer return.
*/