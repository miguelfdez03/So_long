/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:27:32 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/19 19:02:23 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "../libs/MLX42/include/MLX42/MLX42.h"
# include "../libs/libft/ft_printf.h"
# include "../libs/libft/get_next_line.h"
# include "../libs/libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct s_game
{
	char			**map;
	char			**map_copy;
	int				lines;
	int				columns;
	int				coin;
	int				c_copy;
	int				exit;
	int				e_copy;
	int				player;
	t_point			p_position;
	t_point			e_position;
	int				moves;
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
}					t_game;

int					read_map(t_game *game, char *map_name);
void				free_game_maps(t_game *game);
int					validate_map(t_game *game);
int					load_game_textures(t_game *game);
int					render_map(t_game *game);
void				handle_key_input(mlx_key_data_t keydata, void *param);
int					print_error(char *str);
void				update_moves_counter(t_game *game);

#endif
