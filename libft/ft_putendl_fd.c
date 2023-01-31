/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:01:34 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned long	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(fd, &(s[i]), 1);
			i++;
		}
		write (fd, "\n", 1);
	}
}

/*#include <stdio.h>
*# include <fcntl.h>
*int main(void)
*{
* //int	ft_display_file2(char *file_name)
*	int		fd;
*	char	buffer[20000];
*	int		ifread;
*	char	s[200] = "you must code a set of functions";
*
*	fd = open("test.txt", O_RDWR);
*	if (fd == -1)
*	{
*		printf("Cannot read file.\n");
*		return (3);
*	}
*	ifread = read(fd, buffer, 20000);
*	while (ifread > 0)
*	{
*		printf("%s", buffer);
*		ifread = read(fd, buffer, 20000);
*	}
*	if (ifread == -1)
*	{
*		printf("Cannot read file.\n");
*		return (3);
*	}
*	ft_putendl_fd(s, fd);
*	close(fd);
*	printf("\ns = %s\n", s);
*	fd = open("test.txt", O_RDWR);
*	if (fd == -1)
*	{
*		printf("Cannot read file.\n");
*		return (3);
*	}
*	ifread = read(fd, buffer, 20000);
*	while (ifread > 0)
*	{
*		printf("%s", buffer);
*		ifread = read(fd, buffer, 20000);
*	}
*	if (ifread == -1)
*	{
*		printf("Cannot read file.\n");
*		return (3);
*	}	
*	close(fd);
*	printf("\n");
*	return (0);
*}*/
/* Call it:
* gcc -Wall -Wextra -Werror ft_putendl_fd.c && ./a.out */