/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:02:14 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/29 12:32:42 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	char		c;

	if (!fd)
		return ;
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	c = nb % 10 + '0';
	write(fd, &c, 1);
}

/* int	main(int argc, char **argv)
{
	(void) argc;
	int	x = -123;
	int	fd = open(argv[1], O_WRONLY);
	ft_putnbr_fd(x, fd);
	close(fd);
	return (0);
} */
