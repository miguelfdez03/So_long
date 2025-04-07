/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:55:36 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 18:59:28 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main(void)
{
    printf("\nTesting ft_putchar_fd:\n");
    printf("-------------------\n");
    
    // Writing to standard output (fd 1)
    printf("Writing 'A' to stdout: ");
    ft_putchar_fd('A', 1);
    printf("\n");
    
    // Writing to standard error (fd 2)
    printf("Writing 'B' to stderr: ");
    ft_putchar_fd('B', 2);
    printf("\n");
    
    return (0);
} */
