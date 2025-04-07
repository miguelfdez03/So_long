/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:56:51 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/17 19:45:14 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	int	n;

	n = 0;
	if (c >= 0 && c <= 127)
		n = 1;
	return (n);
}

/*
int	main(void)
{
	int	test[] = {65, 0, 127, 128, -1};
	int	i;
	char	*result;

	i = 0;
	while (i < 5)
	{
		if (ft_isascii(test[i]))
			result = "ASCII";
		else
			result = "not ASCII";
		printf("Value %d is %s\n", test[i], result);
		i++;
	}
	return (0);
} */
