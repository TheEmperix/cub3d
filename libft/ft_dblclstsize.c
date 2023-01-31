/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblclstsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:00:07 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dblclstsize(t_dblclst *lst)
{
	t_dblclst	*tmp;
	int			len_lst;

	len_lst = 0;
	if (lst != NULL)
	{
		len_lst = 1;
		if (lst->next != NULL)
		{
			tmp = lst->next;
			while (tmp != lst)
			{
				len_lst++;
				tmp = tmp->next;
			}
		}
	}
	return (len_lst);
}
