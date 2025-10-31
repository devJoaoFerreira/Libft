/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:10:23 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 16:36:34 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* int main()
{
	char *str = "Test with this";
	t_list *node = ft_lstnew(str);
	if (node == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Content: %s\n", (char *)node->content);
	printf("Next: %p\n", (void *)node->next);
	free(node);
	return (0);
} */