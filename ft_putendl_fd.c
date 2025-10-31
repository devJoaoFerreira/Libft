/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:42:37 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/29 12:36:05 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	x;

	if (s == NULL)
		return ;
	if (!fd)
		return ;
	x = 0;
	while (s[x])
	{
		write(fd, &s[x], 1);
		x++;
	}
	write(fd, "\n", 1);
}

/* int	main(int argc, char **argv)
{
	(void) argc;
	char	*c = "ola, tudo bem?";
	char	*f = "sim, e contigo?";
	int	fd = open(argv[1], O_WRONLY);
	ft_putendl_fd(c, fd);
	ft_putendl_fd(f, fd);
	close(fd);
	return (0);
} */
