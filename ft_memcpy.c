/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:11:27 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/02 15:39:44 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dst;
	s = (unsigned char *)src;
	if (!src && !dst)
		return (dst);
	while (n--)
		*d++ = *s++;
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{

	char str1[] = "h";
	char str2[] = "";
	printf("%s\n", ft_memcpy(str2, str1, strlen(str1) + 1));

	char str3[] = "h";
	char str4[] = "";
	printf("%s\n", memcpy(str4, str3, strlen(str3) + 1));
	
}
*/
/*
Assumption: Destination space is big enough to store number of bytes mentioned
- Does not handle overlapping
- n value is only locally modified
- d and s points to the next byte after the end of the copied data
- thus return dst
*/