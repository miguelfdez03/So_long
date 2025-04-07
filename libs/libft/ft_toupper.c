/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:46:31 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 22:55:50 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/* int main(void)
{
    char str[] = "hello World 123";
    int i;
    
    printf("\nTesting ft_toupper:\n");
    printf("----------------\n");
    printf("Original: %s\n", str);
    printf("Uppercase: ");
    
    i = 0;
    while (str[i])
    {
        printf("%c", ft_toupper(str[i]));
        i++;
    }
    printf("\n");
    
    return (0);
} */
