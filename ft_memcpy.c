/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:50:03 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 16:44:27 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	if (!dest && !src)
		return (0);
	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	x = 0 ;
	while (x < n)
	{
		ptr[x] = ptr2[x];
		x++;
	}
	return (dest);
}

/* int main ()
{
   const char src[50] = "element";
   char dest[50] = "gym";
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src) + 1);
   printf("After memcpy dest = %s\n", dest);
   return(0);
} */
