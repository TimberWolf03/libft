/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:18:02 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/04 16:32:07 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	int	ctr;

	ctr = 0;
	while ((size > 0) && s1[ctr] && s2[ctr] && s1[ctr] == s2[ctr])
	{
		ctr++;
		size--;
	}
	if (size == 0)
		return (0);
	return ((unsigned char)s1[ctr] - (unsigned char)s2[ctr]);
}

/*
casting done to prevent int overflow as int range limited to 2^(32) numbers
*/