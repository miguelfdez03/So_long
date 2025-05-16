/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 19:39:19 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/16 19:43:11 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	is_rectangular(char **map)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(map[0]);
	while (map[i])
	{
		if (ft_strlen(map[i]) != (size_t)len)
			return (0);
		i++;
	}
	return (1);
}

static int	check_first_last_row(char **map, int len, int last)
{
	int	j;

	j = 0;
	while (j < len)
	{
		if (map[0][j] != '1')
			return (0);
		if (map[last][j] != '1')
			return (0);
		j++;
	}
	return (1);
}

static int	is_walled(char **map)
{
	int	i;
	int	len;
	int	last;

	i = 0;
	len = ft_strlen(map[0]);
	last = 0;
	while (map[last])
		last++;
	last--;
	if (!check_first_last_row(map, len, last))
		return (0);
	i = 1;
	while (i < last)
	{
		if (map[i][0] != '1')
			return (0);
		if (map[i][len - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}

static int	is_valid_char(char c)
{
	if (c == '0' || c == '1' || c == 'P' || c == 'E' || c == 'C')
		return (1);
	return (0);
}

static int	has_required_elements(char **map)
{
	int	player;
	int	exit;
	int	collect;
	int	i;
	int	j;

	player = 0;
	exit = 0;
	collect = 0;
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (!is_valid_char(map[i][j]))
				return (0);
			if (map[i][j] == 'P')
				player++;
			if (map[i][j] == 'E')
				exit++;
			if (map[i][j] == 'C')
				collect++;
			j++;
		}
		i++;
	}
	if (player != 1 || exit < 1 || collect < 1)
		return (0);
	return (1);
}

int	is_valid_map(char **map)
{
	if (!map || !map[0])
		return (0);
	if (!is_rectangular(map))
		return (0);
	if (!is_walled(map))
		return (0);
	if (!has_required_elements(map))
		return (0);
	return (1);
}
