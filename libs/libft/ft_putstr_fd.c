/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:55:59 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 19:19:39 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

/* int main(void)
{
    printf("\nTesting ft_putstr_fd:\n");
    printf("-----------------\n");
    
    printf("Writing strings to stdout:\n");
    ft_putstr_fd("First string", 1);
    printf("\n");
    ft_putstr_fd("Second string", 1);
    printf("\n");
    
    return (0);
} */
