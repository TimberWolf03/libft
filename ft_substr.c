/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:03:44 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/08 18:40:23 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	ctr;

	ctr = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start + 1)
		len = ft_strlen(s) - start + 1;
	sub = malloc ((len + 1) * sizeof(char));
	if (!sub)
		return (0);
	while (ctr < len && s[start])
		sub[ctr++] = s[start++];
	sub[ctr] = '\0';
	return (sub);
}

/*
Explanation:
- returns null if string is null

- if the starting index is more than equal to length of string set the len to 
copy as 0. (We have allocated 1 space for null terminator in malloc)
Why >= and not > ?
say strlen is 8 and start index is 8, it is actually pointing to null 
terminator

- if the len to copy is more than the remaining characters after start 
index, set the len to copy = number of remaining chars. (We have allocated 1 
space for null terminator in malloc)

- allocate for characters after index + 1 for null terminator

- copy into substring with 2 conditions: 
(1) until the remaining char number is achieved
(2) OR until the string we copy from has been null terminated
*/

/*
#include <stdio.h>
int main()
{
	printf("%s",ft_substr("vanakkam",7,4));
}
*/