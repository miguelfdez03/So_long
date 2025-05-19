/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:27:32 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/16 21:03:27 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "../libs/MLX42/include/MLX42/MLX42.h"
# include "../libs/libft/ft_printf.h"
# include "../libs/libft/get_next_line.h"
# include "../libs/libft/libft.h"
# include <fcntl.h>
# include <stdbool.h>

typedef struct s_position
{
	int	x;
	int	y;
}	t_position;

typedef struct s_game_state
{
	char			**map;
	char			**map_backup;
	int				map_height;
	int				map_width;
	int				collectibles_count;
	int				collectibles_reachable;
	int				exit_count;
	int				exit_reachable;
	int				player_count;
	t_position		player_pos;
	t_position		exit_pos;
	int				movement_count;
	mlx_t			*mlx;
	mlx_texture_t	*t_coin;
	mlx_image_t		*i_coin;
	mlx_texture_t	*t_floor;
	mlx_image_t		*i_floor;
	mlx_texture_t	*t_player;
	mlx_image_t		*i_player;	
	mlx_texture_t	*t_o_exit;
	mlx_image_t		*i_o_exit;
	mlx_texture_t	*t_c_exit;
	mlx_image_t		*i_c_exit;
	mlx_texture_t	*t_wall;
	mlx_image_t		*i_wall;
	mlx_image_t		*moves_counter;
	char			*moves_str;
}	t_game_state;

// Function declarations

// Displays an error message and returns failure status
int		display_error_message(char *message);

// Handles keyboard input for player movement
void	handle_player_movement(mlx_key_data_t keydata, void *param);

// Renders all game elements (walls, player, collectibles, etc.) to the window
int		render_game_elements(t_game_state *game);

// Loads all game textures and converts them to images
int		load_game_assets(t_game_state *game);

// Reads and parses the map file into game structure
int		load_map_from_file(t_game_state *game, char *map_path);

// Frees all allocated memory and resources
void	cleanup_game_resources(t_game_state *game);

// Validates map structure, elements and playability
int		validate_map(t_game_state *game);

#endif
