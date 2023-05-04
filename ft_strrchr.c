/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:04:20 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/04 15:15:03 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	len;
	int	ctr;

	ctr = 0;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == c)
			return (&str[len]);
		len--;
	}
	return (0);
}
