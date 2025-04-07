/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:09:42 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/17 19:27:44 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

/* int main(void)
{
    char str[] = "Hello World";
    int i;
    
    printf("Before bzero: %s\n", str);
    
    ft_bzero(str, 5);  // first 5 bytes to 0
    
    printf("After bzero (first 5 bytes): ");
    i = 0;
    while (i < sizeof(str))
    {
        if (str[i] == 0)
            printf("\\0");
        else
            printf("%c", str[i]);
        i++;
    }
    printf("\n");
    
    return (0);
} */
