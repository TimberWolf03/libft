/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 01:16:11 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/10 02:31:19 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	numlen;

	numlen = 0;
	if (n <= 0)
		numlen++;
	while (n != 0)
	{
		numlen++;
		n /= 10;
	}
	return (numlen);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	l;

	l = n;
	len = ft_numlen(l);
	str = malloc(sizeof(char) * (len + 1));
	if (l == 0)
		str[0] = '0';
	if (!str)
		return (0);
	if (l < 0)
	{
		str[0] = '-';
		l *= -1;
	}
	str[len] = '\0';
	while (len-- && l != 0)
	{
		str[len] = (l % 10) + '0';
		l /= 10;
	}
	return (str);
}

/*
#include <stdio.h>
int main()
{
	printf("%s\n",ft_itoa());
}
*/

/*
Notes:
- long to accomodate for --2147483648
*/