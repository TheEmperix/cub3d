/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblclstinit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:00:03 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dblclst	*ft_dblclstinit(int val)
{
	t_dblclst	*outp;
	int			i;

	outp = (t_dblclst *)malloc(sizeof(t_dblclst));
	if (outp == NULL)
		return (NULL);
	outp->val = val;
	outp->position = 0;
	outp->flag = 0;
	outp->next = outp;
	outp->prev = outp;
	i = 0;
	while (i < 32)
	{
		outp->binar[i] = '0';
		i++;
	}
	outp->binar[i] = '\0';
	return (outp);
}
