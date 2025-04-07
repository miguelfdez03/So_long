/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:49:14 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 19:33:17 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void test_function(unsigned int i, char *c)
{
    // Simple function that converts lowercase to uppercase
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

int main(void)
{
    char str[] = "helLo3 world";
    
    printf("\nTesting ft_striteri:\n");
    printf("------------------\n");
    
    printf("Original string: %s\n", str);
    ft_striteri(str, &test_function);
    printf("Modified string: %s\n", str);
    
    return (0);
} */
