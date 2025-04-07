/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:20:46 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 19:25:41 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	if (c == '\0')
		return ((char *)s);
	else
		return (NULL);
}

/* int main(void)
{
    char str[] = "Hello World";
    char *result;
    char chars_to_find[] = {'o', 'z', '\0'};
    int i;

    printf("\nTesting ft_strchr:\n");
    printf("----------------\n");
    
    i = 0;
    while (i < 3)
    {
        result = ft_strchr(str, chars_to_find[i]);
        printf("Searching for '%c': ", chars_to_find[i]);
        if (result)
            printf("Found at position %ld\n", result - str);
        else
            printf("Not found\n");
        i++;
    }
    
    return (0);
} */
