/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:50:47 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/17 19:45:48 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	n;

	n = 0;
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		|| (c >= '0' && c <= '9'))
		n = 1;
	return (n);
}

/*
int	main(void)
{
	char	test[] = "Hello 42!@";
	int		i;

	i = 0;
	while (test[i])
	{
		printf("char '%c': %d\n", test[i], ft_isalnum(test[i]));
		i++;
	}
	return (0);
} */
