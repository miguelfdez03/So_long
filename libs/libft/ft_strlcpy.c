/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:25:13 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 22:27:37 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*src_start;
	size_t		src_len;
	size_t		i;

	src_start = src;
	src_len = 0;
	while (src_start[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/* int main(void)
{
    char src[] = "Hello World";
    char dest[7];  // Small buffer to show size limiting
    size_t result;
    
    printf("\nTesting ft_strlcpy:\n");
    printf("------------------\n");
    
    printf("Source string: '%s'\n", src);
    printf("Destination buffer size: %zu\n", sizeof(dest));
    
    result = ft_strlcpy(dest, src, sizeof(dest));
    
    printf("Copied string: '%s'\n", dest);
    printf("Return value (source length): %zu\n", result);
    
    return (0);
} */
