/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:01:30 by asaravan          #+#    #+#             */
/*   Updated: 2023/04/28 11:56:31 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int nb)
{
	if (nb >= 32 && nb <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_isprint('~'));
}
*/