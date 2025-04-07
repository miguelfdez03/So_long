/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:54:12 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/19 09:54:28 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len])
		len++;
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* int main(void)
{
    char *original = "Hello World";
    char *duplicate;
    
    printf("\nTesting ft_strdup:\n");
    printf("----------------\n");
    
    printf("Original string: '%s'\n", original);
    
    duplicate = ft_strdup(original);
    printf("Duplicated string: '%s'\n", duplicate);
    printf("Different memory address: %p != %p\n", original, duplicate);
    
    free(duplicate);
    return (0);
} */
