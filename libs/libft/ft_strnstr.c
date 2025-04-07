/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:27:39 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 22:36:59 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;
	size_t		remaining;

	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0' && len > 0)
	{
		b = big;
		l = little;
		remaining = len;
		while (*l != '\0' && remaining > 0 && *b == *l)
		{
			b++;
			l++;
			remaining--;
		}
		if (*l == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

/* int main(void)
{
    const char *haystack = "Hello World";
    const char *needle = "World";
    
    printf("\nTesting ft_strnstr:\n");
    printf("Looking for '%s' in '%s'\n", needle, haystack);
    
    char *result = ft_strnstr(haystack, needle, strlen(haystack));
    
    if (result)
        printf("Found: '%s'\n", result);
    else
        printf("Not found\n");
    
    return (0);
} */
