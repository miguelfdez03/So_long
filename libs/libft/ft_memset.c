/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:33:16 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/17 20:16:07 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}

/* int main(void)
{
    char buffer[10];
    int i;

    printf("\nTesting ft_memset:\n");
    printf("-----------------\n");

    // Fill buffer with 'A'
    ft_memset(buffer, 'A', 9);

    printf("Buffer after ft_memset: %s\n", buffer);
    
    return (0);
} */
