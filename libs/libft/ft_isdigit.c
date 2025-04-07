/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:47:37 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/17 19:45:26 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	n;

	n = 0;
	if (c >= '0' && c <= '9')
		n = 1;
	return (n);
}

/* int	main(void)
{
	char	test[] = "42a!9";
	int		i;
	char	*result;

	i = 0;
	while (test[i])
	{
		if (ft_isdigit(test[i]))
			result = "a digit";
		else
			result = "not a digit";
		printf("'%c' is %s\n", test[i], result);
		i++;
	}
	return (0);
} */
