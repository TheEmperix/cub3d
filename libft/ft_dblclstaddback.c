/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblclstaddback.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 18:59:26 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dblclst	*ft_dblclstaddback(t_dblclst **lst, t_dblclst **new)
{
	if (*lst != NULL && *new != NULL)
	{
		(*lst)->prev->next = *new;
		(*new)->prev = (*lst)->prev;
		(*lst)->prev = *new;
		(*new)->next = *lst;
	}
	if (*lst == NULL)
		*lst = *new;
	return (*lst);
}
