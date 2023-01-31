/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:03:06 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:03:07 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*/#include <stdio.h>
*#include <ctype.h>
*int	main(void)
*{
*	int c = 97;
*	printf("toupper: \t%c\n", (char)toupper(c));
*	printf("ft_toupper: \t%c\n", (char)ft_toupper(c));
*	return (0);
*}*/
/* Call it:
* gcc -Wall -Wextra -Werror ft_toupper.c && ./a.out */