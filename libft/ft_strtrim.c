/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:02:51 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_if_is_in(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static unsigned long	my_bgn_is(char const *s1, char const *set)
{
	unsigned long	bgn;

	bgn = 0;
	while (my_if_is_in(s1[bgn], set))
		bgn++;
	return (bgn);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned long	i;
	unsigned long	bgn;
	unsigned long	fnsh;
	char			*outp;

	if (!s1)
		return (NULL);
	bgn = my_bgn_is(s1, set);
	fnsh = ft_strlen(s1) - 1;
	while (fnsh && my_if_is_in(s1[fnsh], set))
		fnsh--;
	if (!s1[bgn] || !s1[fnsh] || (bgn > fnsh))
		return (ft_strdup(""));
	outp = (char *)malloc(sizeof(char) * (fnsh - bgn + 2));
	if (outp == NULL)
		return (NULL);
	i = 0;
	while ((bgn + i) <= fnsh)
	{
		outp[i] = s1[bgn + i];
		i++;
	}
	outp[i] = '\0';
	return (outp);
}

/*#include <stdio.h>
*int	main(void)
*{
*	char	s1[2000] = "Allocates (with malloc(3)) and returns a copy of \
*’s1’ with the characters specified in ’set’ removed \
*from the beginning and the end of the string.";
*	char	set[200] = "oAl.gnic";
*	char	*outp;
*
*	outp = ft_strtrim(s1, set);
*	printf("s1: %s\nset: %s\nft_strtrim: %s\n", s1, set, outp);
*	free (outp);
*	return (0);
*}*/
/* Call it: 
* gcc -Wall -Wextra -Werror ft_strtrim.c ft_strlen.c ft_strdup.c && ./a.out */