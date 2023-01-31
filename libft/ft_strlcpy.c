/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:02:27 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, \
						size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*#include <stdio.h>
*int main(void)
*{
*	char	dst[21] = "11111111111111111111";
*	char	dst1[21] = "11111111111111111111";
*	char	src[21] = "22222222222222222222";
*	int		dstsize = 20;
*	printf ("strlcpy:\tsize = %lu dst = \t%s\n", \
*				strlcpy(dst, src, dstsize), dst);
*	printf ("ft_strlcpy:\tsize = %zu dst1 = \t%s\n", \
*				ft_strlcpy(dst1, src, dstsize), dst1);
*	return (0);
*}*/
/* Call it:
* gcc -Wall -Wextra -Werror ft_strlcpy.c && ./a.out */