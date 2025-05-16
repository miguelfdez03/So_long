/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:29:44 by miguel-f          #+#    #+#             */
/*   Updated: 2025/04/07 18:11:05 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	char	**map;

	if (argc != 2)
	{
		ft_printf("Usage: %s <map.ber>\n", argv[0]);
		return (1);
	}
	map = read_map(argv[1]);
	if (!map)
	{
		ft_error("Error: Could not read the map.\n");
		return (1);
	}
	if (!is_valid_map(map))
	{
		ft_error("Error: The map is not valid.\n");
		free_map(map);
		return (1);
	}
	printf("The map is valid.\n");
	// Here you can continue with the game logic
	free_map(map);
	return (0);
}
