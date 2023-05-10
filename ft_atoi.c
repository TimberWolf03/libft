/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:55:46 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/05 16:26:27 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	ctr;
	int	sign;
	int	num;

	ctr = 0;
	sign = 1;
	num = 0;
	while ((str[ctr] >= 9 && str[ctr] <= 13) || str[ctr] == ' ')
		ctr++;
	if (str[ctr] == '+' || str[ctr] == '-')
	{
		if (str[ctr] == '-')
			sign = -1;
		ctr++;
	}
	while (str[ctr] >= '0' && str[ctr] <= '9')
	{
		num *= 10;
		num += str[ctr] - '0';
		ctr++;
	}
	return (sign * num);
}

/*
#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("%d",ft_atoi(" 			+72872872 dfdfd"));
}
*/
/*
atoi can have infinite amount of spaces before it detects digits and ends upon 
detecting non-digit
*/