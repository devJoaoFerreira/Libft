/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:33:02 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/22 16:36:16 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(int argc, char **argv)
{
	(void) argc;
	char	c = 'z';
	int	fd = open(argv[1], O_WRONLY);
	ft_putchar_fd(c, fd);
	close(fd);
	return (0);
} */
