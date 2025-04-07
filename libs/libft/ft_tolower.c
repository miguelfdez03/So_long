/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:03:15 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 22:54:38 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/* int main(void)
{
    char str[] = "HELLO World 123";
    int i;
    
    printf("\nTesting ft_tolower:\n");
    printf("----------------\n");
    printf("Original: %s\n", str);
    printf("Lowercase: ");
    
    i = 0;
    while (str[i])
    {
        printf("%c", ft_tolower(str[i]));
        i++;
    }
    printf("\n");
    
    return (0);
} */
