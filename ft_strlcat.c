/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:55:55 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/11 03:32:23 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ctr;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	if (!dst)
		dstlen = 0;
	else
		dstlen = ft_strlen(dst);
	ctr = 0;
	if (dstlen >= size)
		return (srclen + size);
	while (src[ctr] && ctr < size - dstlen - 1)
	{
		dst[dstlen + ctr] = src[ctr];
		ctr++;
	}
	dst[dstlen + ctr] = '\0';
	return (dstlen + srclen);
}
/*
#include <stdio.h>
int main()
{
	printf("%zu\n", ft_strlcat(NULL, "jjss !", 0));
}
*/
/*
input size_t n is the max possible characters in dst including null terminating 
character
*/