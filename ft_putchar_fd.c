/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 00:22:19 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/11 00:34:03 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
a file descriptor (fd) is an integer that represents a reference to an open 
file, socket, or other input/output resource. 

In most Unix-like systems, there are three standard file descriptors that are 
automatically opened for every process:
0 - Standard input (stdin)
1 - Standard output (stdout)
2 - Standard error (stderr)
*/