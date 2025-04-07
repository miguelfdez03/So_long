/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:23:02 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 22:29:23 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/* int main(void)
{
    char *strings[] = {"Hello", "Test", "", "Hello World!"};
    int i;

    printf("\nTesting ft_strlen:\n");
    printf("----------------\n");
    
    i = 0;
    while (i < 4)
    {
        printf("String: '%s'\n", strings[i]);
        printf("Length: %zu\n", ft_strlen(strings[i]));
        printf("----------------\n");
        i++;
    }
    
    return (0);
} */
