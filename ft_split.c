/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:46:02 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/10 01:14:46 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(char const *s, char del)
{
	int	wordnum;

	wordnum = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s == del && *s)
			s++;
		if (*s != del && *s)
			wordnum++;
		while (*s != del && *s)
			s++;
	}
	return (wordnum);
}

static int	countchar(char const *s, char del, int firstchar)
{
	int	charnum;

	charnum = 0;
	if (!s)
		return (0);
	while (s[firstchar + charnum] != del && s[firstchar + charnum])
		charnum++;
	return (charnum);
}

char	**ft_split(char const *s, char del)
{
	char	**word;
	size_t	ctr;
	size_t	i;
	size_t	j;

	ctr = 0;
	i = 0;
	word = malloc (sizeof(char *) * (countword(s, del) + 1));
	if (!word || !s)
		return (0);
	while (s[ctr])
	{
		while (s[ctr] == del && s[ctr])
			ctr++;
		if (!s[ctr])
			break ;
		word[i] = malloc(sizeof(char) * (countchar(s, del, ctr) + 1));
		j = 0;
		while (s[ctr] != del && s[ctr])
			word[i][j++] = s[ctr++];
		word[i++][j] = '\0';
	}
	word[i] = 0;
	return (word);
}

/*
Thought process:
ft_split returns an array of strings which is also an 
array of characters. Thus, to allocate memory we need to know the number of 
words (strings) and the length of each word. In summary, the helper functions 
we need are:
1) countword
2) countchar

Notes:
- +1 for both malloc: 1 for null pointer to mark end of splitting words, 1 is 
null terminator to mark end of a string
- allocation success check removed due to function 25 line limitation
*/