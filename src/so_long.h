/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:27:32 by miguel-f          #+#    #+#             */
/*   Updated: 2025/05/16 19:44:10 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "../libs/MLX42/include/MLX42/MLX42.h"
# include "../libs/libft/ft_printf.h"
# include "../libs/libft/get_next_line.h"
# include "../libs/libft/libft.h"
# include <fcntl.h>
# include <stdbool.h>

int	ft_error(char *str);
int is_valid_map(char **map);
#endif
