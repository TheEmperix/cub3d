/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:01:13 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((i < (unsigned int) n) && \
			((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
	{
		i++;
	}
	if (i == (unsigned int) n)
	{
		return (0);
	}
	else
	{
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
}

/*#include <stdio.h>
*int	main(void)
*{
*	char	s1[21] = "12345678901234567890";
*	char	s2[20] = "12345699901234567890";
*	unsigned int	n = 10;
*	printf ("s1 \t%s\n", s1);
*	printf ("s2 \t%s\n", s2);
*	printf ("memcmp s1-s2= \t\t%d\n", memcmp(s1, s2, n));
*	printf ("ft_memcmp s1-s2= \t%d\n", ft_memcmp(s1, s2, n));
*	return (0);
*}*/
/* Call it:
* gcc -Wall -Wextra -Werror ft_memcmp.c && ./a.out */