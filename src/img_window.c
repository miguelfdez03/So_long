/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_window.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 19:52:06 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/19 18:41:57 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	render_map(t_game *g)
{
	int	i;
	int	j;

	j = 0;
	while (g->map[j] != NULL)
	{
		i = 0;
		while (g->map[j][i] != '\n' && g->map[j][i] != '\0')
		{
			mlx_image_to_window(g->mlx, g->i_floor, i * 64, j * 64);
			if (g->map[j][i] == '1')
				mlx_image_to_window(g->mlx, g->i_wall, i * 64, j * 64);
			if (g->map[j][i] == 'C')
				mlx_image_to_window(g->mlx, g->i_coin, i * 64, j * 64);
			if (g->map[j][i] == 'P')
				mlx_image_to_window(g->mlx, g->i_player, i * 64, j * 64);
			if (g->map[j][i] == 'E')
				mlx_image_to_window(g->mlx, g->i_c_exit, i * 64, j * 64);
			i++;
		}
		j++;
	}
	return (EXIT_SUCCESS);
}
