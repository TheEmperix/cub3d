/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:02:23 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_src = 0;
	while (src[len_src])
		len_src++;
	len_dst = 0;
	while (dst[len_dst] && len_dst < dstsize)
		len_dst++;
	i = len_dst;
	while (src[len_dst - i] && len_dst + 1 < dstsize)
	{
		dst[len_dst] = src[len_dst - i];
		len_dst++;
	}
	if (i < dstsize)
		dst[len_dst] = '\0';
	return (i + len_src);
}

/*#include <stdio.h>
*int	main(void)
*{
*	char	dst[40] = "1234";
*	char	dst1[40] = "1234";
*	char	src[20] = "aaaaaaaaaaaaaaaaaaaa";
*	int		dstsize = 40;
*	printf ("strlcat:\tsize = %lu,\tdst = %s\n", strlcat(dst, src, dstsize), dst);
*	printf ("ft_strlcat:\tsize = %zu,\tdst = %s\n", ft_strlcat(dst1, src, \
*	dstsize), dst1);
*	return (0);
*}*/
/* Call it:
* gcc -Wall -Wextra -Werror ft_strlcat.c && ./a.out */