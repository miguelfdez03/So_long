/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:04:47 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 22:53:51 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	copy_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	copy_len = len;
	if (copy_len > s_len - start)
		copy_len = s_len - start;
	substr = (char *)malloc((copy_len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, copy_len + 1);
	return (substr);
}

/* int main(void)
{
    char *str = "Hello World";
    char *sub;
    
    printf("\nTesting ft_substr:\n");
    printf("----------------\n");
    printf("Original string: '%s'\n", str);
    
    // Extract "World" (starts at 6, length 5)
    sub = ft_substr(str, 6, 5);
    printf("Substring (6,5): '%s'\n", sub);
    free(sub);
    
    return (0);
} */
