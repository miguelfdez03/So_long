/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 19:53:09 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/19 18:46:26 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	update_player_position(t_game *g, int x, int y, void *img)
{
	if (g->map[g->p_position.y][g->p_position.x] == 'E')
	{
		mlx_image_to_window(g->mlx, g->i_floor, g->p_position.x * 64,
			g->p_position.y * 64);
		mlx_image_to_window(g->mlx, g->i_c_exit, g->p_position.x * 64,
			g->p_position.y * 64);
	}
	if (g->map[g->p_position.y][g->p_position.x] != 'E' &&
		g->map[g->p_position.y][g->p_position.x] != '1')
		mlx_image_to_window(g->mlx, g->i_floor,
			g->p_position.x * 64, g->p_position.y * 64);
	g->p_position.x = x;
	g->p_position.y = y;
	if (g->map[g->p_position.y][g->p_position.x] == 'C')
	{
		mlx_image_to_window(g->mlx, g->i_floor,
			g->p_position.x * 64, g->p_position.y * 64);
		g->map[g->p_position.y][g->p_position.x] = '0';
		g->coin--;
		if (g->coin == 0)
			mlx_image_to_window(g->mlx, g->i_o_exit,
				g->e_position.x * 64, g->e_position.y * 64);
	}
	mlx_image_to_window(g->mlx, img, g->p_position.x * 64,
		g->p_position.y * 64);
}

static void	handle_movement(t_game *g, int x, int y, void *img)
{
	if (g->map[y][x] == 'E' && g->coin == 0)
	{
		mlx_close_window(g->mlx);
		ft_printf("\nYou have won\n");
	}
	else if (g->map[y][x] != '1')
	{
		update_player_position(g, x, y, img);
		g->moves++;
		update_moves_counter(g);
		ft_printf("Number of movements: %d\n", g->moves);
	}
}

void	handle_key_input(mlx_key_data_t keydata, void *param)
{
	t_game	*g;

	g = param;
	if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_PRESS)
		mlx_close_window(g->mlx);
	if (keydata.key == MLX_KEY_UP && keydata.action == MLX_PRESS)
		handle_movement(g, g->p_position.x, g->p_position.y - 1, g->i_player);
	if (keydata.key == MLX_KEY_LEFT && keydata.action == MLX_PRESS)
		handle_movement(g, g->p_position.x - 1, g->p_position.y, g->i_player);
	if (keydata.key == MLX_KEY_DOWN && keydata.action == MLX_PRESS)
		handle_movement(g, g->p_position.x, g->p_position.y + 1, g->i_player);
	if (keydata.key == MLX_KEY_RIGHT && keydata.action == MLX_PRESS)
		handle_movement(g, g->p_position.x + 1, g->p_position.y, g->i_player);
}
