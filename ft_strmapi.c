/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:53:21 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/28 20:01:27 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	x;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	x = 0;
	while (s[x])
	{
		str[x] = f(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}

/* char	teste(unsigned int i, char c)
{
	if (i % 3 == 0 && i != 0)
		c = 'f';
	if (c == 'o')
		c = 'O';
	return (c);
}
int	main(void)
{
	char *s = NULL;
	char *str = ft_strmapi(s, &teste);
	int	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	free(str);
	return (0);
} */
