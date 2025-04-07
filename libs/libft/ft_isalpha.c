/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:23:53 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/17 19:45:05 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	n;

	n = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		n = 1;
	return (n);
}

/*
int	main(void)
{
	char	test[] = "He 1$";
	int		i;
	char	*result;

	i = 0;
	while (test[i])
	{
		if (ft_isalpha(test[i]))
			result = "alphabetic";
		else
			result = "not alphabetic";
		printf("'%c' is %s\n", test[i], result);
		i++;
	}
	return (0);
} */
