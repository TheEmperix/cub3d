/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:02:55 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*outp;
	size_t	len_s;
	size_t	len_outp;
	size_t	i;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s < start)
		return (ft_strdup(""));
	if ((len_s - start) > len)
		len_outp = len;
	else
		len_outp = (len_s - start);
	outp = (char *)malloc(sizeof(char) * len_outp + 1);
	if (outp == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		outp[i] = s[start + i];
		i++;
	}
	outp[i] = '\0';
	return (outp);
}

/*#include <stdio.h>
*int	main(void)
*{
*	char			s[200] = "12345678901234567890";
*	unsigned int	start = 5;
*	int				len = 15;
*	char			*s1;
*	s1 = ft_substr(s, start, len);
*	printf ("s: %s, start = %d, len = %d\n", s, start, len);
*	printf ("ft_substr: %s\n", s1);
*	free (s1);
*	return (0);
*}*/
/* Call it:
* gcc -Wall -Wextra -Werror ft_substr.c ft_strdup.c ft_strlen.c && ./a.out */