/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:31:31 by miguel-f          #+#    #+#             */
/*   Updated: 2025/01/24 14:02:17 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	select_case(const char *format, va_list args, int *i)
{
	int				count;

	count = 0;
	if (format[*i] == 'c')
		count += handle_char(args);
	else if (format[*i] == 's')
		count += handle_string(args);
	else if (format[*i] == 'p')
		count += handle_pointer(args);
	else if (format[*i] == 'd' || format[*i] == 'i')
		count += ft_putnbr_fd2(va_arg(args, int), 1);
	else if (format[*i] == 'u')
		count += ft_putunbr_fd(va_arg(args, unsigned int), 1);
	else if (format[*i] == 'x' || format[*i] == 'X')
		count += ft_puthex(va_arg(args, unsigned int), format[*i]);
	else if (format[*i] == '%')
		return (write(1, "%", 1));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;
	int		i;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += select_case(format, args, &i);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
