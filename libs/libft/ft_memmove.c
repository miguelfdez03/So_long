/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:51:52 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/17 20:08:45 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = src;

	d = dest;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (d > s)
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}

/* int main(void)
{
    char str[] = "Hello World";
    printf("\nTesting ft_memmove:\n");
    printf("-----------------\n");
    
    printf("Original string: %s\n", str);
    
    // Moving overlapping memory (moving 'World' to the beginning)
    ft_memmove(str, str + 6, 5);
    
    printf("After memmove: %s\n", str);
    
    return (0);
} */
