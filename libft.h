/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:51:03 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/04 16:03:18 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// myheader.h
#ifndef LIBFT_H
# define LIBFT_H

// libraries used
# include <unistd.h>

// function prototypes
int		ft_isalpha(int c);
int		ft_isdigit(int nb);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int nb);
int		ft_strlen(const char *str);
void	*ft_memset(void *sd, unsigned char c, size_t n);
void	*ft_bzero(void *sd, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t size);

#endif