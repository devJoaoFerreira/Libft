/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:11:51 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 16:25:43 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* void delete_content(void *content)
{
    free(content);
}

int	main(void)
{
	t_list	*list = NULL;
	int	*b = malloc(sizeof(int));
	*b = 1;
	ft_lstadd_front(&list, ft_lstnew(b));
	int	*a = malloc(sizeof(int));
	*a = 2;
	ft_lstadd_back(&list, ft_lstnew(a));
	t_list *temp = list;
	list = list->next;
	ft_lstdelone(temp, delete_content);
	printf("%d\n", *(int *)temp->content);
	printf("%d", *(int *)list->content);
	return(0);
} */
