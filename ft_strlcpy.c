/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:55:55 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/01 23:03:06 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	ctr;

	ctr = 0;
	if (n > 0)
	{
		while (ctr < n - 1 && src[ctr] != '\0')
		{
			dst[ctr] = src[ctr];
			ctr++;
		}
		dst[ctr] = '\0';
	}
	while (src[ctr] != '\0')
		ctr++;
	return (ctr);
}
/*
#include <stdio.h>
int main()
{
	char dst[20];
	const char *src = NULL;
	size_t result = ft_strlcpy(dst, src, 20);
	printf ("%zu\n",result);
	printf ("%s\n",dst);
	// expected result: result = 0, dst = ""
}
*/
/*
n input parameter is the maximum number of characters that can be written into 
dst including the null terminating character at the end.
If either src or dst is NULL, the behavior of strlcpy() is undefined.
It is the responsibility of the caller to ensure that both src and dst are 
valid pointers to null-terminated strings.
*/