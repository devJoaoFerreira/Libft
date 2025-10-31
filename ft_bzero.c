/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:30:02 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/29 16:06:20 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			x;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		ptr[x] = 0;
		x++;
	}
}

/* int	main(void)
{
	char s[10] = "Hello";
    ft_bzero(s, sizeof(s));
    printf("%c\n%c\n%c", s[0], s[1], s[2]);
    return 0;
} */
