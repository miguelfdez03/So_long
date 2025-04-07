/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:40:13 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/17 20:06:16 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	s = src;
	d = dest;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

/* int main(void)
{
    char src[] = "Hello";
    char dest[10];
    int i;

    printf("\nTesting ft_memcpy:\n");
    printf("-----------------\n");
    
    ft_memcpy(dest, src, 6);  // Copy including null terminator
    
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    
    return (0);
} */
