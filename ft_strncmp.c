/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:13:14 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 17:00:13 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		if (s1[x] != s2[x] || s1[x] == '\0' || s2[x] == '\0')
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		x++;
	}
	return (0);
}
/* int	main(void)
{
	char *s1 = "ola tudo bem?";
	char *s2 = "ola tud0 bem?";
	size_t x = 8;
	size_t y = 7;
	printf("%d\n", ft_strncmp(s1, s2, x));
	printf("%d", ft_strncmp(s1, s2, y));
	return(0);	
} */
