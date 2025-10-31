/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:34:18 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/22 16:35:42 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	teste(unsigned int i, char	*ptr)
{
	if (!ptr)
		return;
	if (i % 3 == 0 && i != 0)
		*ptr = 'f';
	if (*ptr == 'o')
		*ptr = 'O';
}

int	main(void)
{
	char	s[] = "ola tudo bom?";
	ft_striteri(s, &teste);
	printf("%s", s);
	return (0);
} */
