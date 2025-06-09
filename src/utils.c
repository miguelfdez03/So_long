/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:25:31 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/29 13:11:24 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	print_error(char *message)
{
	ft_printf("Error\n%s\n", message);
	return (EXIT_FAILURE);
}

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

void	update_moves_counter(t_game *game)
{
	char	*str;
	char	*moves;

	if (game->moves_counter != NULL)
		mlx_delete_image(game->mlx, game->moves_counter);
	moves = ft_itoa(game->moves);
	str = ft_strjoin("Moves: ", moves);
	game->moves_counter = mlx_put_string(game->mlx, str, 10, 10);
	free(moves);
	free(str);
}
