/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:02:39 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
*int	main(void)
*{
*	char	s1[20] = "qweryyuiop";
*	char	s2[20] = "qwertyuiop";
*	int	n = 5;
*
*	printf ("strncmp: \t%d\n", strncmp(s1, s2, n));
*	printf ("ft_strncmp: \t%d\n", ft_strncmp(s1, s2, n));
*	return (0);
*}*/
/* Call it:
* gcc -Wall -Wextra -Werror ft_strncmp.c && ./a.out */