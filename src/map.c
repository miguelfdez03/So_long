/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:02:02 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/16 19:36:19 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// Function to count the lines in the file
static int	count_lines(const char *filename)
{
	int		fd;
	int		count;
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (-1);
	count = 0;
	line = get_next_line(fd);
	while (line != NULL)
	{
		count++;
		free(line);
	}
	close(fd);
	return (count);
}

// Function to read the map from the file
char	**read_map(const char *filename)
{
	int		fd;
	int		lines;
	char	**map;
	int		i;

	lines = count_lines(filename);
	if (lines <= 0)
		return (NULL);
	map = (char **)malloc(sizeof(char *) * (lines + 1));
	if (!map)
		return (NULL);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(map);
		return (NULL);
	}
	i = 0;
	while (i < lines)
	{
		map[i] = get_next_line(fd);
		if (map[i] == NULL)
		{
			while (i-- > 0)
				free(map[i]);
			free(map);
			close(fd);
			return (NULL);
		}
		i++;
	}
	map[i] = NULL;
	close(fd);
	return (map);
}

// Function to free the memory of the map
void	free_map(char **map)
{
	int	i;

	if (!map)
		return ;
	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}
