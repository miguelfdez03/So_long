/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:32:36 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 22:50:04 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	k = 0;
	while (i < j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}

/* int main(void)
{
    char *str = "---Hello-World---";
    char *set = "-";
    char *result;

    printf("\nTesting ft_strtrim:\n");
    printf("----------------\n");
    printf("Original: '%s'\n", str);
    printf("Trimming: '%s'\n", set);
    
    result = ft_strtrim(str, set);
    printf("Result:   '%s'\n", result);
    
    free(result);
    return (0);
} */
