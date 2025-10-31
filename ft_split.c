/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:22:29 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/29 17:18:34 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	word_c;
	int	x;

	word_c = 0;
	x = 0;
	while (s[x])
	{
		if (s[x] != c)
		{
			word_c += 1;
			while (s[x] && s[x] != c)
				x++;
			continue ;
		}
		x++;
	}
	return (word_c);
}

static char	*words(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*words;

	words = NULL;
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	words = malloc(sizeof(char) * (i + 1));
	if (words == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		words[j] = s[j];
		j++;
	}
	words[j] = '\0';
	return (words);
}

static char	**split(const char *s, char c, char **dest)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (s[x])
	{
		if (s[x] != c)
		{
			dest[y] = words(&s[x], c);
			if (dest[y] == NULL)
			{
				while (--y >= 0)
					free(dest[y]);
				free(dest);
				return (NULL);
			}
			y++;
			while (s[x] && s[x] != c)
				x++;
			continue ;
		}
		x++;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	size_t	wcount;
	char	**dest;

	if (!s)
		return (NULL);
	wcount = word_count(s, c);
	dest = malloc(sizeof(char *) * (wcount + 1));
	if (dest == NULL)
		return (NULL);
	dest[wcount] = NULL;
	dest = split(s, c, dest);
	return (dest);
}

/* int	main(void)
{
	char	*s = "Words.to.be.splitted.in.six";
	char	c= '.';
	char	**dest = ft_split(s, c);
	int i = 0;

	if(dest)
	{
	while (dest[i])
	{
		printf("%s\n", dest[i]);
		free(dest[i]);
		i++;
	}
	free(dest);
	}
	return (0);
} */