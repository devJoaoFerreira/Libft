/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:39:15 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 16:44:33 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	x = 0;
	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (x < n)
	{
		if (ptr[x] != ptr2[x])
			return (ptr[x] - ptr2[x]);
		x++;
	}
	return (0);
}

/* int	main(void)
{
	char *s1 = "olas";
	char *s2 = "olai";
	size_t x = 3;
	printf("%d", ft_memcmp(s1, s2, x));
	return (0);
} */