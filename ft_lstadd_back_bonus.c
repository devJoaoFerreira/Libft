/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:22:26 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 15:07:29 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}

/* int	main(void)
{
	t_list	*list = NULL;
	int	*b = malloc(sizeof(int));
	*b = 1;
	ft_lstadd_front(&list, ft_lstnew(b));
	int	*a = malloc(sizeof(int));
	*a = 2;
	ft_lstadd_back(&list, ft_lstnew(a));
	printf("%d", *(int *)list->next->content);
	return(0);
} */
