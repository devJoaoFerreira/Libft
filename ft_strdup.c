/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:09:59 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 17:11:40 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*dup;
	size_t		x;

	dup = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dup == NULL)
		return (NULL);
	x = 0;
	while (x <= ft_strlen(s))
	{
		dup[x] = s[x];
		x++;
	}
	return (dup);
}

/* int	main(void)
{
	char *s = "ola, tudo bem?";
	char *dup = ft_strdup(s);
	printf("%s\n", s);
	printf("%s", dup);
	return (0);
} */