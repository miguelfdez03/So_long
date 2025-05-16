/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:43:03 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/16 21:17:06 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_strdup2(const char *s);
char	*ft_strjoin2(char const *s1, char const *s2);
char	*ft_strchr2(const char *s, int c);
char	*ft_substr2(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy2(char *dst, const char *src, size_t size);
size_t	ft_strlen2(const char *s);

#endif
