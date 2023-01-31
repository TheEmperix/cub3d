/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:01:09 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char) c)
		{
			return (&((unsigned char *)s)[i]);
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
*int	main(void)
*{
*	char	s[21] = "12345678901234567890";
*	int		c = '7';
*	int		n = 8;
*
*	printf ("memchr: \t%s\n", (char *)memchr(s, c, n));
*	printf ("ft_memchr: \t%s\n", (char *)ft_memchr(s, c, n));
*	return (0);
*}*/
/* Call it:
* gcc -Wall -Wextra -Werror ft_memchr.c && ./a.out */