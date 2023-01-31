/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:02:31 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned long	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>
*int	main(void)
*{
*	char s[200] = "qwertyuiopasdfg212121hjkl;";
*	printf("strlen:\t\t%lu\n", strlen(s));
*	printf("ft_strlen:\t%zu\n", ft_strlen(s));
*	return (0);
*}*/
/* Call it:
* gcc -Wall -Wextra -Werror ft_strlen.c && ./a.out */