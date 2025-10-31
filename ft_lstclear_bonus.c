/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:40:17 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 15:22:41 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}

/* void delete_content(void *content)
{
    free(content);
}

int	main(void)
{
	t_list	*list = NULL;
	int	*a = malloc(sizeof(int));
	*a = 2;
	ft_lstadd_front(&list, ft_lstnew(a));
	printf("%d", *(int *)list->content);
	ft_lstclear(&list, delete_content);
	printf("%p", (void *)list);
	return(0);
} */
