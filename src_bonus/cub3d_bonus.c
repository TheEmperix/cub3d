/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by fbunary           #+#    #+#             */
/*   Updated: 2022/11/05 19:05:56 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"

static void	init_game(t_game *game)
{
	int	i;

	game->ceil_color = 16777216;
	game->ceil_color_old = 8778996;
	game->floor_color = 16777216;
	game->floor_color_old = 9578022;
	game->map_hght = 0;
	game->map_h_tmp = 0;
	game->img_resolution_x = 2400;
	game->img_resolution_y = 1200;
	i = -1;
	while (++i < 5)
		game->textur[i].ptr = NULL;
	i = -1;
	while (++i < 280)
		game->key[i] = 0;
	game->minimap_enable = 1;
	game->minimap_multiplier = 16;
}

static void	init_alloc_game(t_game *game)
{
	game->mlx = mlx_init();
	game->column = malloc(sizeof(t_column) * game->img_resolution_x);
	if ((game->mlx == NULL) || !game->column)
	{
		ft_putstr_fd("Error\nCannot allocate mamory\n", 2);
		exit (errno);
	}
}

int	my_cub3d(const char *map, int fd)
{
	t_game	game;
	int		err;

	init_game(&game);
	init_alloc_game(&game);
	if (pars_map(&game, map, fd))
		exit (1);
	err = my_store_imgs(&game);
	if (err)
	{
		ft_putstr_fd("Error\nCannot load textures\n", 2);
		exit (err);
	}
	err = my_play_game(&game);
	my_free_map_components(&game);
	free (game.column);
	exit (err);
	return (0);
}
