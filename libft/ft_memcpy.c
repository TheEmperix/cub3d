/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:01:16 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!n || dst == src)
		return (dst);
	while (i < (unsigned int) n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
*int	main(void)
*{
*	char	src[21] = "qwertyuiopasdfghj";
*	char	*dst[21];
*	char	*outp;
*	outp = memcpy(dst, src, 10);
*	printf ("memcpy:\t\t%s\n", (char *)outp);
*	outp = ft_memcpy(dst, src, 10);
*	printf ("ft_memcpy:\t%s\n", (char *)outp);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_memcpy.c && ./a.out */