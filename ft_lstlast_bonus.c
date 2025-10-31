/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:49:14 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 16:41:13 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* t_list *create_node(char *content)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return node;
}
int	main()
{
	t_list *last;
	last = ft_lstlast(NULL);
	printf("Test 1 (Empty list): %s\n", last ? "Failed" : "Passed");
	t_list *single = create_node("only");
	last = ft_lstlast(single);
	if (last == single)
		printf("Test 2 (Single node): Passed, content = %s\n",
		(char *)last->content);
	else
		printf("Test 2 (Single node): Failed\n");
	free(single);
	t_list *node1 = create_node("first");
	t_list *node2 = create_node("second");
	t_list *node3 = create_node("third");
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	last = ft_lstlast(node1);
	if (last == node3)
		printf("Test 3 (Multi-node): Passed, content = %s\n",
		(char *)last->content);
	else
		printf("Test 3 (Multi-node): Failed\n");
	free(node1);
	free(node2);
	free(node3);
	return (0);
} */