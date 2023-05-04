/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:10:40 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/02 14:48:26 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *sd, size_t n)
{
	size_t			ctr;
	unsigned char	*temp;

	temp = sd;
	ctr = 0;
	while (ctr < n)
	{
		temp[ctr] = 0;
		ctr++;
	}
	return (temp);
}
/*
similar to memset except zero everything
*/
