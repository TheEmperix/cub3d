/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by fbunary           #+#    #+#             */
/*   Updated: 2022/11/05 19:06:11 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"

int	mouse_move(int x, int y, t_game *game)
{
	if (y > 0 && y < (int)game->img_resolution_y)
	{
		if (x > (int)game->img_resolution_x * 3 / 5
			&& x < (int)game->img_resolution_x)
			game->p_angle += 0.01;
		else if (x < (int)game->img_resolution_x * 2 / 5 && x > 0)
			game->p_angle -= 0.01;
		__sincos(game->p_angle, &game->p_vect_y, &game->p_vect_x);
	}
	return (0);
}

int	my_if_closed_window(int keycode, t_game *game)
{
	(void) keycode;
	(void) game;
	exit(0);
	return (0);
}
