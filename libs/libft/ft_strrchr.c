/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:22:20 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 22:44:23 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = s;
	while (*last)
		last++;
	if ((char)c == '\0')
		return ((char *)last);
	while (last >= s)
	{
		if (*last == (char)c)
			return ((char *)last);
		last--;
	}
	return (NULL);
}

/* int main(void)
{
    const char *str = "Hello World";
    char c = 'o';
    
    printf("\nTesting ft_strrchr:\n");
    printf("-----------------\n");
    printf("String: '%s'\n", str);
    printf("Looking for last '%c'\n", c);
    
    char *result = ft_strrchr(str, c);
    if (result)
        printf("Found at position: %ld\n", result - str);
    else
        printf("Not found\n");
    
    return (0);
} */