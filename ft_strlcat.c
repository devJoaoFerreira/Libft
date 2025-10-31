/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:24:38 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 17:08:42 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	x;

	x = 0;
	dst_l = ft_strlen(dst);
	src_l = ft_strlen((char *)src);
	if (dst_l >= size)
		return (size + src_l);
	while (src[x] != '\0' && (dst_l + x + 1) < size)
	{
		dst[dst_l + x] = src[x];
		x++;
	}
	if (dst_l + x < size)
		dst[dst_l + x] = '\0';
	return (dst_l + src_l);
}

/* int main(void)
{
	char s1[50] = "ola tudo bem?\n";
	char *s2 = "sim, e contigo?";
	size_t x = 30;
	printf("%zu\n", ft_strlcat(s1, s2, x));
	printf("%s", s1);
	return(0);
} */