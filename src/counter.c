/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:00:00 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/19 18:47:11 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    update_moves_counter(t_game *game)
{
    char    *str;
    char    *moves;

    if (game->moves_counter != NULL)
        mlx_delete_image(game->mlx, game->moves_counter);
    moves = ft_itoa(game->moves);
    str = ft_strjoin("Moves: ", moves);
    game->moves_counter = mlx_put_string(game->mlx, str, 10, 10);
    free(moves);
    free(str);
}
