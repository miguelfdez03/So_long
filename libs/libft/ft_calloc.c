/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:47:26 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/19 09:50:12 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	total_size = nmemb * size;
	memory = malloc(total_size);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, total_size);
	return (memory);
}

/* int	main(void)
{
	int	*numbers;
	int	i;

	// Allocate space for 5 integers
	numbers = (int *)ft_calloc(5, sizeof(int));
	if (numbers)
	{
		printf("Allocated array of 5 integers:\n");
		i = 0;
		while (i < 5)
		{
			printf("numbers[%d] = %d\n", i, numbers[i]);
			i++;
		}
		free(numbers);
	}
	return (0);
} */
