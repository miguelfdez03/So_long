/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:32:36 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/19 09:57:29 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, int start, int finish)
{
	char	*word;
	int		i;

	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_result(char **result, int j)
{
	while (j >= 0)
		free(result[j--]);
	free(result);
}

static char	**split_words(char const *s, char c, char **result)
{
	size_t	i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			result[j] = word_dup(s, start, i);
			if (!result[j++])
			{
				free_result(result, j - 1);
				return (NULL);
			}
			start = -1;
		}
		i++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (split_words(s, c, result));
}

/* int main(void)
{
    char    *str = "Hello,World,Split,Test";
    char    **result;
    int     i;

    printf("\nTesting ft_split:\n");
    printf("---------------\n");
    printf("Original string: %s\n", str);
    printf("Splitting by ','\n\n");

    result = ft_split(str, ',');
    i = 0;
    
    while (result[i] != NULL)
    {
        printf("Word %d: '%s'\n", i + 1, result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return (0);
} */
