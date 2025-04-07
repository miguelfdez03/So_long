/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:57:00 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 19:36:24 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	total_len = len1 + len2 + 1;
	result = (char *)malloc(total_len * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, total_len);
	ft_strlcpy(result + len1, s2, len2 + 1);
	return (result);
}

/* int main(void)
{
    char *str1 = "Hello ";
    char *str2 = "World!";
    char *result;
    
    printf("\nTesting ft_strjoin:\n");
    printf("-----------------\n");
    
    printf("First string: '%s'\n", str1);
    printf("Second string: '%s'\n", str2);
    
    result = ft_strjoin(str1, str2);
    printf("Joined string: '%s'\n", result);
    
    free(result);
    return (0);
} */
