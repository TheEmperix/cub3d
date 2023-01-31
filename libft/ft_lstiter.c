/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:00:51 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst)
	{
		tmp = lst;
		while (tmp->next)
		{
			f(tmp->content);
			tmp = tmp->next;
		}
		f(tmp->content);
	}
}

/*#include <stdio.h>
*void	free_fct(void *data)
*{
*	char *str = (char *)data;
*	str[0] = '1';
*}
*int	main(void)
*{
*	t_list	*list;
*	t_list	*temp;
*	t_list	*temp2;
*	t_list	*temp3;
*	t_list	*temp4;
*
*	char *s = (char *)malloc(10);
*	s[0] = 'a';
*	s[1] = '\0';
*	list = ft_lstnew(s);
*	s = (char *)malloc(10);
*	s[0] = 'b';
*	s[1] = '\0';
*	ft_lstadd_front(&list, ft_lstnew(s));
*	s = (char *)malloc(10);
*	s[0] = 'c';
*	s[1] = '\0';
*	ft_lstadd_front(&list, ft_lstnew(s));
*	s = (char *)malloc(10);
*	s[0] = 'd';
*	s[1] = '\0';
*	ft_lstadd_front(&list, ft_lstnew(s));
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
*	temp = list;
*	ft_lstiter(temp, &free_fct);
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
*	free(list);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_lstiter.c ft_lstadd_front.c \
* ft_lstnew.c && ./a.out */