/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:25:06 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 16:44:40 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*ptr;

	x = 0;
	ptr = (unsigned char *)s;
	while (x < n)
	{
		if (ptr[x] == (unsigned char)c)
			return (&ptr[x]);
		x++;
	}
	return (NULL);
}

/* int	main(void)
{
	char *s = "ola tudo bem?";
	int	c = 'a';
	size_t n = 6;
	printf("%s", (char *)ft_memchr(s, c, n));
	return (0);
} */