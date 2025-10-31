/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:29:15 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/29 12:36:15 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	x;

	x = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		x++;
	}
	return (x);
}

/* int main(void)
{
	t_list * head = NULL;
	head = (t_list *) malloc(sizeof(t_list));
	if (head == NULL) 
		return 1;
	head->content = (void *)(intptr_t)1;
	head->next = (t_list *) malloc(sizeof(t_list));
	head->next->content = (void *)(intptr_t)2;
	head->next->next = NULL;
	printf("%d", ft_lstsize(head));
	return (0);
} */