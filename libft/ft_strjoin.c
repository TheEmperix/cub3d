/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:02:20 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long	i;
	unsigned long	j;
	char			*outp;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	outp = (char *)malloc(sizeof(char) * (i + 1));
	if (outp == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		outp[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		outp[i + j] = s2[j];
		j++;
	}
	outp[i + j] = '\0';
	return (outp);
}

/*#include <stdio.h>
*int	main(void)
*{
*	char	s1[200] = "1111111111";
*	char	s2[200] = "2222222222";
*	char	*outp;
*
*	outp = ft_strjoin(s1, s2);
*	printf("s1: %s, s2: %s\nft_strjoin: %s\n", s1, s2, outp);
*	free (outp);
*	return (0);
*}*/
/* Call it: 
* gcc -Wall -Wextra -Werror ft_strjoin.c ft_strlen.c && ./a.out */