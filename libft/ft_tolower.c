/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:03:00 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*#include <stdio.h>
*#include <ctype.h>
*int	main(void)
*{
*	int c = 69;
*	printf("tolower: \t%c\n", (char)tolower(c));
*	printf("ft_tolower: \t%c\n", (char)ft_tolower(c));
*	return (0);
*}*/
/* Call it:
* gcc -Wall -Wextra -Werror ft_tolower.c && ./a.out */