/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:37:19 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 19:43:36 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	dest_len = 0;
	while (dst[dest_len] && dest_len < size)
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	total_len = dest_len + src_len;
	i = 0;
	while (src[i] && dest_len + i + 1 < size)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (total_len);
}
/* int	main(void)
{
	char			dest[3] = "He";
	char			src[] = " Wor";
	unsigned int	size;
	unsigned int	result;
 
	size = 4;
	result = ft_strlcat(dest, src, size);
	printf("'%s'\n", dest);
	printf("Length: %u\n", result);
	return (0);
} */
