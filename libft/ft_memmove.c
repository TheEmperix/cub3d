/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:01:22 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;

	if (src < dst)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		i = 0;
		if (!len || dst == src)
			return (dst);
		while (i < (unsigned int) len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*#include <stdio.h>
*int	main(void)
*{
*	char	src[20] = "11111111111111111111";
*	char	dst[21] = "zxcvbnmasdfghjklqwer";
*	char	dsc[21] = "zxcvbnmasdfghjklqwer";
*	int		len = 9;
*
*	printf("memmove:\t%s\n", (char *) memmove(dst, src, len));
*	printf("ft_memmove:\t%s\n", (char *) ft_memmove(dsc, src, len));
*	return (0);
*}*/
/* Call it:
* gcc -Wall -Wextra -Werror ft_memmove.c && ./a.out */