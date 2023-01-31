/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by fbunary           #+#    #+#             */
/*   Updated: 2022/11/05 19:06:02 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"

void	my_free_map_components(t_game *game)
{
	unsigned int	hght_tmp;

	hght_tmp = -1;
	while (++hght_tmp < game->map_hght)
	{
		if (game->map_components[hght_tmp])
			free(game->map_components[hght_tmp]);
	}
	if (game->map_components)
		free (game->map_components);
}

int	my_free_map_components2(t_game *game)
{
	unsigned int	hght_tmp;

	hght_tmp = -1;
	while (++hght_tmp < game->map_hght)
	{
		if (game->map_components[hght_tmp])
			free(game->map_components[hght_tmp]);
	}
	if (game->map_components)
		free (game->map_components);
	if (game->column)
		free (game->column);
	ft_putstr_fd("Error\nCannot allocate mamory\n", 2);
	return (1);
}
