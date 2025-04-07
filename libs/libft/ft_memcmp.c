/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:05:38 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/17 20:02:15 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/* int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Help!";
    int  i;
    
    char *test_cases[][2] = {
        {str1, str2},  // Identical strings
        {str1, str3},  // Different at pos 3
        {"AAA", "aaa"} // Different case
    };
    
    i = 0;
    printf("\nTesting ft_memcmp:\n");
    printf("------------------\n");
    
    while (i < 3)
    {
        printf("Comparing: '%s' with '%s'\n", 
            test_cases[i][0], test_cases[i][1]);
        printf("Result: %d\n", 
            ft_memcmp(test_cases[i][0], test_cases[i][1], 5));
        printf("------------------\n");
        i++;
    }
    return (0);
} */
