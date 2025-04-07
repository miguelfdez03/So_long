/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:16:20 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 23:55:46 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	int	n;

	n = 0;
	if (c >= 32 && c < 127)
		n = 1;
	return (n);
}

/* int	main(void)
{
	int	test[] = {65, 32, 127, 31, 7};
	int	i;
	char	*result;

	i = 0;
	while (i < 5)
	{
		if (ft_isprint(test[i]))
			result = "printable";
		else
			result = "not printable";
		printf("ASCII %d is %s\n", test[i], result);
		i++;
	}
	return (0);
}
 */