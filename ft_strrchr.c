/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:04:20 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/11 03:03:01 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	unsigned char	temp;
	int				len;
	int				ctr;

	temp = c;
	ctr = 0;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == temp)
			return (&str[len]);
		len--;
	}
	return (0);
}
