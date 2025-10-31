/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:01:17 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/29 17:24:42 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}
/* void *double_content(void *content)
{
    int *new_content = (int *)malloc(sizeof(int));
    if (!new_content)
        return (NULL);
    *new_content = *(int *)content * 2;
    return (new_content);
}

void delete_content(void *content)
{
    free(content);
}
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", *(int *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}
int main(void)
{
	t_list	*list = NULL;
	int	*a = malloc(sizeof(int));
	int	*b = malloc(sizeof(int));
	int	*c = malloc(sizeof(int));
	*a = 1;
	*b = 2;
	*c = 3;
	ft_lstadd_back(&list, ft_lstnew(a));
	ft_lstadd_back(&list, ft_lstnew(b));
	ft_lstadd_back(&list, ft_lstnew(c));
	print_list(list);
	t_list *m_list = ft_lstmap(list, double_content, delete_content);
	print_list(m_list);
	return (0);
} */
