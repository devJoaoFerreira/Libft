/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:32:24 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 16:43:06 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	y;
	char	*trim;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	x = 0;
	y = ft_strlen(s1) - 1;
	while (s1[x] && check_set(set, s1[x]))
		x++;
	while (y > x && check_set(set, s1[y]))
		y--;
	if (x > y)
		return (ft_strdup(""));
	trim = ft_substr(s1, x, y - x + 1);
	if (trim == NULL)
		return (NULL);
	return (trim);
}

/* int	main(void)
{
	char *s1 = ".//...////././ola .tudo/ bem?//..././.";
	char *set = "./";
	printf("%s", ft_strtrim(s1, set));
	return (0);
} */