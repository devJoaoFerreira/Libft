/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:56:29 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/30 16:37:01 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}
int	main(void)
{
	t_list *list = ft_lstnew("test");
	ft_lstadd_back(&list, ft_lstnew("with"));
	ft_lstadd_back(&list, ft_lstnew("this!"));
	ft_lstiter(list, print_content);
} */