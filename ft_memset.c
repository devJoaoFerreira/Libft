/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:29:43 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 17:17:50 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		ptr[x] = (unsigned char)c;
		x++;
	}
	return (s);
}

/* int main(void)
{
	char s[] = "ola, tudo bem?";
	int	c = 65;
	size_t n = 5;
	char *res = ft_memset(s, c, n);
	printf("%s", res);
	return (0);
} */