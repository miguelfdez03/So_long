/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:02:02 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/19 19:02:07 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libs/libft/get_next_line.h"
#include "so_long.h"

// Libera la memoria asignada para los mapas y la estructura del juego
void	free_game_maps(t_game *game)
{
	int	i;

	i = 0;
	if (game->map)
	{
		while (i <= game->lines)
		{
			free(game->map[i]);
			i++;
		}
		free(game->map);
	}
	i = 0;
	if (game->map_copy)
	{
		while (i <= game->lines)
		{
			free(game->map_copy[i]);
			i++;
		}
		free(game->map_copy);
	}
	free(game);
}

// Lee las columnas del mapa y las almacena en las estructuras map y map_copy
static int	read_map_columns(char *line, t_game *game, int fd, char *map_name)
{
	int	i;

	i = 0;
	fd = open(map_name, 0);
	line = get_next_line(fd);
	while (i < game->lines)
	{
		game->columns = ft_strlen(line);
		if (line[game->columns - 1] != '\n')
			game->columns++;
		game->map[i] = ft_calloc(game->columns, sizeof(char *));
		game->map_copy[i] = ft_calloc(game->columns, sizeof(char *));
		if (!game->map || !game->map_copy)
			return (free(line), EXIT_FAILURE);
		ft_strlcpy(game->map[i], line, game->columns);
		ft_strlcpy(game->map_copy[i], line, game->columns);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	game->columns--;
	game->map[i] = NULL;
	game->map_copy[i] = NULL;
	return (close(fd), free(line), EXIT_SUCCESS);
}

// Lee el número de líneas del mapa y reserva memoria para almacenarlas
static int	read_map_lines(char *line, t_game *game, int fd, char *map_name)
{
	fd = open(map_name, 0);
	line = get_next_line(fd);
	if (line == NULL)
		return (print_error("The map is empty"));
	while (line != NULL)
	{
		game->lines++;
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	game->map = ft_calloc(game->lines + 1, sizeof(char *));
	game->map_copy = ft_calloc(game->lines + 1, sizeof(char *));
	if (!game->map || !game->map_copy)
		return (free(line), EXIT_FAILURE);
	close(fd);
	if (read_map_columns(line, game, fd, map_name) == 1)
		return (free(line), EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

// Función principal para leer el archivo del mapa y almacenarlo en la estructura del juego
int	read_map(t_game *game, char *map_name)
{
	int		fd;
	char	*line;

	line = NULL;
	fd = open(map_name, 0);
	if (fd < 0)
		return (print_error("Could not open the map"));
	close(fd);
	if (read_map_lines(line, game, fd, map_name) == 1)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
