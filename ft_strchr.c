/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:41:50 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/04 15:15:52 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	while (*str != c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return (str);
}

/*
Function return pointer to the first occurence of the char we wanna search.
We can't put while loop condition as equal to null as what if the char searched 
itself is null. Thus flip the position of null return and string pointer return.
*/