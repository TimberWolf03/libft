/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:08:47 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/06 15:58:58 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elem, size_t size)
{
	void	*ptr;

	if (num_elem == SIZE_MAX || size == SIZE_MAX)
		return (0);
	ptr = malloc(num_elem * size);
	if (!ptr)
		return (0);
	ptr = ft_bzero(ptr, num_elem * size);
	return (ptr);
}

/*
allocates memory and intialises it to 0
*/