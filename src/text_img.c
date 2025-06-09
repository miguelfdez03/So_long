/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 19:56:08 by miguel-f          #+#    #+#             */
/*   Updated: 2025/06/09 14:17:28 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_textures(t_game *game)
{
	if (game->t_coin)
		mlx_delete_texture(game->t_coin);
	if (game->t_floor)
		mlx_delete_texture(game->t_floor);
	if (game->t_player)
		mlx_delete_texture(game->t_player);
	if (game->t_o_exit)
		mlx_delete_texture(game->t_o_exit);
	if (game->t_c_exit)
		mlx_delete_texture(game->t_c_exit);
	if (game->t_wall)
		mlx_delete_texture(game->t_wall);
}

void	remove_images(t_game *game)
{
	if (game->i_coin)
		mlx_delete_image(game->mlx, game->i_coin);
	if (game->i_floor)
		mlx_delete_image(game->mlx, game->i_floor);
	if (game->i_player)
		mlx_delete_image(game->mlx, game->i_player);
	if (game->i_c_exit)
		mlx_delete_image(game->mlx, game->i_o_exit);
	if (game->i_o_exit)
		mlx_delete_image(game->mlx, game->i_c_exit);
	if (game->i_wall)
		mlx_delete_image(game->mlx, game->i_wall);
	mlx_terminate(game->mlx);
}

int	control_textures(t_game *game)
{
	if (!game->t_coin || !game->t_floor || !game->t_player || !game->t_c_exit
		|| !game->t_o_exit || !game->t_wall)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	load_game_textures(t_game *game)
{
	game->t_coin = mlx_load_png("sprites/spider_web.png");
	game->t_floor = mlx_load_png("sprites/floor.png");
	game->t_player = mlx_load_png("sprites/spider.png");
	game->t_c_exit = mlx_load_png("sprites/c_portal.png");
	game->t_o_exit = mlx_load_png("sprites/o_portal.png");
	game->t_wall = mlx_load_png("sprites/wall.png");
	if (control_textures(game) == EXIT_SUCCESS)
	{
		game->i_coin = mlx_texture_to_image(game->mlx, game->t_coin);
		game->i_floor = mlx_texture_to_image(game->mlx, game->t_floor);
		game->i_player = mlx_texture_to_image(game->mlx, game->t_player);
		game->i_o_exit = mlx_texture_to_image(game->mlx, game->t_o_exit);
		game->i_c_exit = mlx_texture_to_image(game->mlx, game->t_c_exit);
		game->i_wall = mlx_texture_to_image(game->mlx, game->t_wall);
		free_textures(game);
		return (EXIT_SUCCESS);
	}
	free_textures(game);
	return (print_error("Could not load the images"));
}
