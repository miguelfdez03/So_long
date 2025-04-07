/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:16:33 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 22:34:10 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int main(void)
{
    char *s1 = "Hello World";
    char *s2 = "Hello Test";
    char *s3 = "Hello";
    
    printf("\nTesting ft_strncmp:\n");
    printf("-----------------\n");
    
    printf("Compare first 5 chars:\n");
    printf("'%s' vs '%s': %d\n", s1, s2, ft_strncmp(s1, s2, 5));
    
    printf("\nCompare first 6 chars:\n");
    printf("'%s' vs '%s': %d\n", s1, s2, ft_strncmp(s1, s2, 6));
    
    printf("\nCompare with shorter string:\n");
    printf("'%s' vs '%s': %d\n", s1, s3, ft_strncmp(s1, s3, 10));
    
    return (0);
} */
