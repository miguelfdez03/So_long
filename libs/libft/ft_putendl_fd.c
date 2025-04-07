/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:56:22 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 19:17:04 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

/* int main(void)
{
    printf("\nTesting ft_putendl_fd:\n");
    printf("-------------------\n");
    
    // Write string to stdout (fd 1)
    printf("Writing to stdout:\n");
    ft_putendl_fd("Hello World", 1);
    ft_putendl_fd("Second line", 1);
    
    return (0);
} */
