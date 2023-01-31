/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:00:48 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		if (del)
			del(lst->content);
		free (lst);
		lst = NULL;
	}
}

/*#include <stdio.h>
*void	free_fct(void *data)
*{
*	//free(data);
*	data = NULL;
*}
*int	main(void)
*{
*	t_list	*list;
*	t_list	*temp;
*	t_list	*temp2;
*	t_list	*temp3;
*	t_list	*temp4;
*
*	list = ft_lstnew("аптека");
*	temp = ft_lstnew("фонарь, ");
*	ft_lstadd_front(&list, temp);
*	temp = ft_lstnew("улица, ");
*	ft_lstadd_front(&list, temp);
*	temp = ft_lstnew("Ночь, ");
*	ft_lstadd_front(&list, temp);
*	temp = list;
*	printf("at address %p\t is plased %s\n", \
*		&temp->content, (char *)temp->content);
*	temp = temp->next;
*	temp2 = temp;
*	printf("at address %p\t is plased %s\n", \
*		&temp2->content, (char *)temp2->content);
*	temp = temp->next;
*	temp3 = temp;
*	printf("at address %p\t is plased %s\n", &temp3->content, \
*		(char *)temp3->content);
*	temp = temp->next;
*	temp4 = temp;
*	printf("at address %p\t is plased %s\n", &temp4->content, \
*		(char *)temp4->content);
*	printf("----------\n");
*	ft_lstdelone(temp3, &free_fct);
*	printf("вы не можете освободить память повторно: \n");
*	temp = list;
*	free(temp4);
*	//free(temp3);
*	free(temp2);
*	free(temp);
*	//free(list);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_lstdelone.c ft_lstadd_front.c \
* ft_lstnew.c && ./a.out */