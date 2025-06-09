/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:29:44 by miguel-f          #+#    #+#             */
/*   Updated: 2025/06/09 14:13:56 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ext_checker(char *map_name)
{
	int	i;

	i = ft_strlen(map_name);
	if ((map_name[i - 1] == 'r' && map_name[i - 2] == 'e')
		&& (map_name[i - 3] == 'b' && map_name[i - 4] == '.'))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}

static void	init_struct(t_game *game)
{
	game->map = NULL;
	game->map_copy = NULL;
	game->lines = 0;
	game->columns = 0;
	game->coin = 0;
	game->exit = 0;
	game->moves = 0;
	game->c_copy = 0;
	game->e_copy = 0;
	game->player = 0;
	game->moves_counter = NULL;
}

int	main(int argc, char **argv)
{
	t_game	*g;

	if (argc != 2)
		return (print_error("Not enough arguments"));
	if (ext_checker(argv[1]) == EXIT_FAILURE)
		return (print_error("Not the correct extension"));
	g = ft_calloc(1, sizeof(t_game));
	init_struct(g);
	if (read_map(g, argv[1]) == EXIT_FAILURE)
		return (free_game_maps(g), EXIT_FAILURE);
	if (validate_map(g) == 1)
		return (free_game_maps(g), EXIT_FAILURE);
	g->mlx = mlx_init(64 * g->columns, 64 * g->lines, "SO_LONG", false);
	if (!g->mlx)
		return (free_game_maps(g), EXIT_FAILURE);
	if (load_game_textures(g) == 1)
		return (remove_images(g), free_game_maps(g), EXIT_FAILURE);
	if (render_map(g) == EXIT_FAILURE)
		return (remove_images(g), free_game_maps(g), EXIT_FAILURE);
	update_moves_counter(g);
	mlx_key_hook(g->mlx, &handle_key_input, g);
	mlx_loop(g->mlx);
	remove_images(g);
	return (free_game_maps(g), EXIT_SUCCESS);
}
