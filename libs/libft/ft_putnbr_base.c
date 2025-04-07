/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:11:06 by miguel-f          #+#    #+#             */
/*   Updated: 2025/01/17 21:16:11 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(unsigned long nbr, const char *base)
{
	int		base_len;
	int		count;
	char	str[65];
	int		i;

	base_len = ft_strlen(base);
	count = 0;
	if (nbr == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	i = 64;
	str[i] = '\0';
	while (nbr > 0)
	{
		str[--i] = base[nbr % base_len];
		nbr /= base_len;
		count++;
	}
	ft_putstr_fd(&str[i], 1);
	return (count);
}
