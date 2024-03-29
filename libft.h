/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaravan <asaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:51:03 by asaravan          #+#    #+#             */
/*   Updated: 2023/05/11 01:28:32 by asaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// myheader.h
#ifndef LIBFT_H
# define LIBFT_H

// libraries used
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
// calloc uses this

// function prototypes
int		ft_isalpha(int c);
int		ft_isdigit(int nb);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int nb);
size_t	ft_strlen(const char *str);
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
void	*ft_memchr(const void *ptr, int c, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t num_elem, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif