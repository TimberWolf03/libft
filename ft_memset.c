/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:15:06 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/02 15:15:37 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *sd, unsigned char c, size_t n)
{
	size_t				ctr;
	unsigned char		*temp;

	temp = sd;
	ctr = 0;
	while (ctr < n)
	{
		temp[ctr] = c;
		ctr++;
	}
	return (temp);
}

/*
unsigned char wraps around 0 to 255 (2^8 bits)
line 20: implicitly cast sd as an unsigned character pointer from void pointer 
and store in temporary variable. explicit casting not done.
*/
