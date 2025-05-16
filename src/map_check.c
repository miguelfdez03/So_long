/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 19:39:19 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/16 19:52:40 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	flood_fill(t_game *game, t_point pos)
{
	if (pos.x >= game->columns || pos.y >= game->lines
		|| game->map_copy[pos.y][pos.x] == '1'
		|| game->map_copy[pos.y][pos.x] == '*')
		return ;
	if (game->map_copy[pos.y][pos.x] == 'C')
		game->c_copy++;
	if (game->map_copy[pos.y][pos.x] == 'E')
	{
		game->e_copy++;
		game->e_position.x = pos.x;
		game->e_position.y = pos.y;
	}
	game->map_copy[pos.y][pos.x] = '*';
	flood_fill(game, (t_point){pos.x + 1, pos.y});
	flood_fill(game, (t_point){pos.x - 1, pos.y});
	flood_fill(game, (t_point){pos.x, pos.y - 1});
	flood_fill(game, (t_point){pos.x, pos.y + 1});
}

int	object_checker(t_game *game, int i, int j)
{
	while (j < game->lines - 1)
	{
		if (i == game->columns - 1)
		{
			i = 0;
			j++;
		}
		if (game->map[j][i] == 'C')
			game->coin++;
		else if (game->map[j][i] == 'E')
		{
			game->e_position.x = i;
			game->e_position.y = j;
			game->exit++;
		}
		else if (game->map[j][i] == 'P')
		{
			game->p_position.x = i;
			game->p_position.y = j;
			game->player++;
		}
		i++;
	}
	return (EXIT_SUCCESS);
}

int	check_wall(t_game *game, int i, int j)
{
	while (j < game->lines - 1)
	{
		if (i == game->columns - 1)
		{
			i = 0;
			j++;
		}
		if (game->map[j][0] != '1' || game->map[j][game->columns - 1] != '1')
			return (ft_error("The map is not enclosed"));
		else if (game->map[0][i] != '1' || game->map[game->lines - 1][i] != '1')
			return (ft_error("The map is not enclosed"));
		else if (game->map[j][i] != '0' && game->map[j][i] != '1' &&
			game->map[j][i] != 'C' && game->map[j][i] != 'P'
			&& game->map[j][i] != 'E')
			return (ft_error("Invalid object"));
		i++;
	}
	return (EXIT_SUCCESS);
}

int	way_checker(t_game *game)
{
	int	x;
	int	y;

	x = game->p_position.x;
	y = game->p_position.y;
	if (game->map[x + 1][y] == '1' && game->map[x - 1][y] == '1'
	&& game->map[x][y + 1] == '1' && game->map[x][y - 1] == '1' )
		return (ft_error("Invalid position of the player"));
	else
	{
		x = game->e_position.x;
		y = game->e_position.y;
		if (game->map[x + 1][y] == '1' && game->map[x - 1][y] == '1'
			&& game->map[x][y + 1] == '1' && game->map[x][y - 1] == '1' )
			return (ft_error("Invalid position of the exit"));
		else
			return (EXIT_SUCCESS);
	}
}

int	map_checker(t_game *game)
{
	if (check_wall(game, 0, 0) == 1)
		return (EXIT_FAILURE);
	if (object_checker(game, 0, 0) == 1)
		return (EXIT_FAILURE);
	flood_fill(game, game->p_position);
	if (game->player != 1 || game->exit != 1 || game->coin == 0)
		return (ft_error("Invalid number of objects"));
	if (game->exit != game->e_copy)
		return (ft_error("Exit not reachable"));
	if (game->coin != game->c_copy)
		return (ft_error("Coin not reachable"));
	return (EXIT_SUCCESS);
}
