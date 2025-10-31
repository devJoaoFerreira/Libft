/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:40:01 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 16:43:36 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	i;

	x = 0;
	while (src[x])
		x++;
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (x);
}

/* int	main(void)
{
	char	dst[30] = "ola tudo bem?";
	char	src[4] = "nao";
	size_t x = 4;
	printf("antes = %s\n", dst);
	ft_strlcpy(dst, src, x);
	printf("depois = %s", dst);
	return (0);
} */