/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:16:19 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/09 14:42:37 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// helper function
static int	isset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	ctr;
	char	*trimmed;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (isset(s1[start], set) && s1[start])
		start++;
	if (!s1[start])
		return (ft_strdup(""));
	while (isset(s1[end], set) && s1[end] && end > 0)
		end--;
	trimmed = malloc(sizeof(char) * (end - start + 2));
	if (!trimmed)
		return (0);
	ctr = 0;
	while (start <= end)
		trimmed[ctr++] = s1[start++];
	trimmed[ctr] = '\0';
	return (trimmed);
}

/*
function:
remove trailing (front) or leading (back) characters set (usually only 
whitespace)

notes:
- end points to last char before null terminator hence -1
- set contains a set of chars that are not acceptable at beginning and end
Thus, we have to screen through each string char to see whether they are in the 
set
- we can't simply return "" (empty string) as it is stored in read only memory. 
We will face problems if we try to modify this memory. Therefore, we have to 
properly allocate memory for it to ensure it is writable/modifiable using strdup
- line 44: end - start + 2
e.g. start index = 0, end index = 1, 1 - 0 = 1. In reality there are 2 chars so 
+2 (1 for lost char in subtraction and 1 for null terminator)

programming guidelines:
If you need helper functions to split a more complex function, define them as 
static functions. This way, their scope will be limited to the appropriate file
*/