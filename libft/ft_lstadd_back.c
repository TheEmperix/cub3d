/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:00:37 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (tmp == NULL)
		*lst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

/*#include <stdio.h>
*int	main(void)
*{
*	t_list	*list;
*	t_list	*list1;
*	t_list	*temp;
*
*	list = ft_lstnew("1word!");
*	printf("list->content = %s\n", (char *)list->content);
*	printf("list->next = %s\n", (char *)list->next);
*	list1 = ft_lstnew("2Hello, ");
*	printf("list1->content = %s\n", (char *)list1->content);
*	printf("list1->next = %s\n", (char *)list1->next);
*	ft_lstadd_back(&list, list1);
*	temp = list;
*	while (temp)
*	{
*		printf("%s\n", (char *)temp->content);
*		temp = temp->next;
*	}
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_lstadd_back.c ft_lstnew.c && ./a.out */