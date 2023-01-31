/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:01:27 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len >= 1)
	{
		((unsigned char *)b)[len - 1] = (unsigned char)c;
		len--;
	}
	return (b);
}

/*#include <stdio.h>
*int	main(void)
*{
*	char	buf[10000];
*
*	memset(buf, '\0', 100);
*	memset(buf, '1', 20);
*	printf ("%s\n", (char *) buf);
*	ft_memset(buf, '2', 11);
*	printf ("%s\n", (char *) buf);
*	return (0);
*}*/
/* Call it:
* gcc -Wall -Wextra -Werror ft_memset.c && ./a.out  */