/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <woberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:59:17 by woberon           #+#    #+#             */
/*   Updated: 2022/11/05 19:01:31 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*#include <stdio.h>
*# include <fcntl.h>
*int main(void)
*{
* //int	ft_display_file2(char *file_name)
*	int		fd;
*	char	buffer[20000];
*	int		ifread;
*	char	c = 'H';
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
*	ft_putchar_fd(c, fd);
*	close(fd);
*	printf("\nc = %c\n", c);
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
* gcc -Wall -Wextra -Werror ft_putchar_fd.c && ./a.out */