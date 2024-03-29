/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:33:11 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/05 13:53:20 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t size)
{
	unsigned char	*temp;

	temp = (unsigned char *)ptr;
	while (size--)
	{
		if (*temp == (unsigned char) c)
			return (temp);
		temp++;
	}
	return (NULL);
}

/*
similar like memchr except it is a block of memory instead of a string
*/