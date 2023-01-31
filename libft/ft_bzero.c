/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:55:37 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 18:55:38 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>
*int	main(void)
*{
*	char	s[200];
*
*	memset(s, '\0', 200);
*	printf("S is %s\n", (char *)memset(s, '1', 20));
*	int i = 0;
*	while (i < 8)
*	{
*		printf("s[%d] is %c\n", i, s[i]);
*		i++;
*	}
*	memset(s, '\0', 200);
*	printf("S is %s\n", (char *)memset(s, '1', 20));
*	bzero(s, 5);
*	i = 0;
*	while (i < 8)
*	{
*		printf("after bzero s[%d] is %c\n", i, s[i]);
*		i++;
*	}
*	memset(s, '\0', 200);
*	printf("S is %s\n", (char *)memset(s, '1', 20));
*	ft_bzero(s, 5);
*	i = 0;
*	while (i < 8)
*	{
*		printf("after ft_bzero s[%d] is %c\n", i, s[i]);
*		i++;
*	}
*	return (0);
*}*/
/* Call it:
 * gcc -Wall -Wextra -Werror ft_bzero.c && ./a.out */