/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:29:44 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/16 19:54:20 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	validate_file_extension(char *map_path)
{
	int	length;

	length = ft_strlen(map_path);
	if ((map_path[length - 1] == 'r' && map_path[length - 2] == 'e')
		&& (map_path[length - 3] == 'b' && map_path[length - 4] == '.'))
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}

static void	initialize_game_state(t_game_state *game)
{
	game->map = NULL;
	game->map_backup = NULL;
	game->map_height = 0;
	game->map_width = 0;
	game->collectibles_count = 0;
	game->exit_count = 0;
	game->movement_count = 0;
	game->collectibles_reachable = 0;
	game->exit_reachable = 0;
	game->player_count = 0;
	game->moves_counter = NULL;
	game->moves_str = NULL;
}

int	main(int argc, char **argv)
{
	t_game	*g;

	if (argc != 2)
		return (ft_error("Not enough arguments"));
	if (validate_file_extension(argv[1]) == EXIT_FAILURE)
		return (ft_error("Not the correct extension"));
	g = ft_calloc(1, sizeof(t_game));
	initialize_game_state(g);
	if (read_map(g, argv[1]) == EXIT_FAILURE)
		return (free_maps(g), EXIT_FAILURE);
	if (map_checker(g) == 1)
		return (free_maps(g), EXIT_FAILURE);
	g->mlx = mlx_init(64 * g->columns, 64 * g->lines, "SO_LONG", false);
	if (!g->mlx)
		return (free_maps(g), EXIT_FAILURE);
	if (text_to_img(g) == 1 || image_to_window(g) == 1)
		return (free_maps(g), EXIT_FAILURE);
	mlx_key_hook(g->mlx, &player_move, g);
	mlx_loop(g->mlx);
	mlx_terminate(g->mlx);
	return (free_maps(g), EXIT_SUCCESS);
}
