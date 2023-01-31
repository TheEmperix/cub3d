/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:01:56 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&((char *)s)[i]);
	return (NULL);
}

/*#include <stdio.h>
*int	main(void)
*{
*	char	s[21] = "11223344556677889900";
*	int		c = '5';
*	printf("String: %s\n", s);
*	printf("strchr:\t\tChar %c is placed in address %p\n", (char)c, \
*	strchr(s, c));
*	printf("ft_strchr:\tChar %c is placed in address %p\n", (char)c, \
*	ft_strchr(s, c));
*}*/
/* Call it:
* gcc -Wall -Wextra -Werror ft_strchr.c && ./a.out */