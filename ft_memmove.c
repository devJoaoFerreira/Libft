/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:29:14 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 15:20:49 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	if (dest == src)
		return (dest);
	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (dest > src)
	{
		x = n;
		while (x > 0)
		{
			x--;
			ptr[x] = ptr2[x];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/* int	main(void)
{
	const char src[50] = "element";
	char dest[50] = "gym";
	printf("Before memcpy dest = %s\n", dest);
	ft_memmove(dest, src, strlen(src) + 1);
	printf("After memcpy dest = %s\n", dest);
	return(0);
} */
