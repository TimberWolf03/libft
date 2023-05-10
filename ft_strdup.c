/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:26:08 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/11 03:29:54 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		ctr;
	size_t	len;
	char	*ptr;

	ctr = 0;
	len = ft_strlen(s1);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (s1[ctr] != '\0')
	{
		ptr[ctr] = s1[ctr];
		ctr++;
	}
	ptr[ctr] = '\0';
	return (ptr);
}

/*
len + 1 to allocate space for null terminator
*/