/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:40:51 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/05 14:29:58 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			ctr;

	if ((!s1 && !s2) || size == 0)
		return (0);
	ctr = 0;
	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	while (size--)
	{
		if (temp1[ctr] != temp2[ctr])
			return (temp1[ctr] - temp2[ctr]);
		ctr++;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	printf("%d",ft_memcmp("abcdefghij", "abcdefgiyz", 7));
}
*/