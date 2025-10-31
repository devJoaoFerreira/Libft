/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:00:59 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/23 13:57:58 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}

/* int	main(int argc, char **argv)
{
	(void) argc;
	char	*c = "ola tudo bem";
	int	fd = open(argv[1], O_WRONLY);
	ft_putstr_fd(c, fd);
	close(fd);
	return (0);
} */
