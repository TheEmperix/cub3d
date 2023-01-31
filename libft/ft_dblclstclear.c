/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblclstclear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 18:59:56 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_fct(t_dblclst *lst)
{
	lst->val = 0;
	lst->next = NULL;
	lst->prev = NULL;
	free (lst);
}

void	ft_dblclstclear(t_dblclst **lst)
{
	t_dblclst	*tmp;
	t_dblclst	*tmp2;

	if (*lst)
	{
		tmp = *lst;
		while (tmp->next)
		{
			tmp2 = tmp->next;
			tmp->next = NULL;
			free_fct (tmp);
			tmp = tmp2;
		}
		free_fct (tmp);
		*lst = NULL;
	}
}
