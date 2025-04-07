/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:29:12 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 19:34:06 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*copy;

	i = 0;
	if (!s || !f)
		return (NULL);
	copy = (char *)malloc(ft_strlen(s) + 1);
	if (copy == NULL)
		return (NULL);
	while (s[i])
	{
		copy[i] = f(i, s[i]);
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/* char	uppercase_mapper(unsigned int i, char c)
{
	(void)i; // To avoid unused variable warning
	return (ft_toupper(c));
}

int	main(void)
{
	char str[] = "Hello World!";
	char *result = ft_strmapi(str, uppercase_mapper);

	if (result)
	{
		printf("Original string: %s\n", str);
		printf("Uppercase string: %s\n", result);
		free(result);
	}
	else
		printf("Error: Memory allocation failed\n");

	return (0);
} */