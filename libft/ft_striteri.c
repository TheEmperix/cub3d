/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:02:16 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*#include <stdio.h>
*void	my_ft_toupper(unsigned int i, char *s)
*{
*	if (s[i] >= 'a' && s[i] <= 'z')
*		s[i] -= 32;
*}
*int main(void)
*{
*    char    s[400] = "Applies the function f to each character of the string";
*    printf ("s \t\t= %s\n", s);
*    ft_striteri(s, &my_ft_toupper);
*    printf ("ft_striteri \t= %s\n", s);
*    return (0);
*}*/
/* Call ut:
* gcc -Wall -Wextra -Werror ft_striteri.c && ./a.out */