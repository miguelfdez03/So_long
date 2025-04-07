/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:36:41 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/17 20:01:53 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
		n--;
	}
	return (NULL);
}

/* int main()
{
    char str[] = "Hello, World!";
    void *result1;
    void *result2;

    // Search for 'o'
    result1 = ft_memchr(str, 'o', strlen(str));
    printf("Result for 'o': ");
    if (result1)
        printf("%s\n", (char*)result1);
    else
        printf("Not found\n");

    // Search for 'z'
    result2 = ft_memchr(str, 'z', strlen(str));
    printf("Result for 'z': ");
    if (result2)
        printf("%s\n", (char*)result2);
    else
        printf("Not found\n");

    return (0);
} */