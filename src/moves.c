/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 19:53:09 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/16 19:55:23 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	images(t_game *g, int x, int y, void *img)
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

static void	update_moves_display(t_game *g)
{
    char *num;
    char *temp;

    if (g->moves_counter)
        mlx_delete_image(g->mlx, g->moves_counter);
    num = ft_itoa(g->moves);
    temp = ft_strjoin("Moves: ", num);
    free(num);
    if (g->moves_str)
        free(g->moves_str);
    g->moves_str = temp;
    g->moves_counter = mlx_put_string(g->mlx, g->moves_str, 10, 10);
}

static void	keypress(t_game *g, int x, int y, void *img)
{
    if (g->map[y][x] == 'E' && g->coin == 0)
    {
        mlx_close_window(g->mlx);
        ft_printf("\nYou have won\n");
    }
    else if (g->map[y][x] != '1')
    {
        images(g, x, y, img);
        g->moves++;
        update_moves_display(g);
        ft_printf("Number of movements: %d\n", g->moves);
    }
}

void	player_move(mlx_key_data_t keydata, void *param)
{
	t_game	*g;

	g = param;
	if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_PRESS)
		mlx_close_window(g->mlx);
	if (keydata.key == MLX_KEY_UP && keydata.action == MLX_PRESS)
		keypress(g, g->p_position.x, g->p_position.y - 1, g->i_player);
	if (keydata.key == MLX_KEY_LEFT && keydata.action == MLX_PRESS)
		keypress(g, g->p_position.x - 1, g->p_position.y, g->i_player);
	if (keydata.key == MLX_KEY_DOWN && keydata.action == MLX_PRESS)
		keypress(g, g->p_position.x, g->p_position.y + 1, g->i_player);
	if (keydata.key == MLX_KEY_RIGHT && keydata.action == MLX_PRESS)
		keypress(g, g->p_position.x + 1, g->p_position.y, g->i_player);
}
