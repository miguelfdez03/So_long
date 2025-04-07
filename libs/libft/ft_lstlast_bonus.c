/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:54:18 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 23:26:42 by miguel-f         ###   ########.fr       */
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

/* int main(void)
{
    t_list *list = NULL;
    t_list *last;
    
    printf("\nTesting ft_lstlast:\n");
    printf("----------------\n");
    
    // Create a simple list
    ft_lstadd_back(&list, ft_lstnew("First"));
    ft_lstadd_back(&list, ft_lstnew("Last"));
    
    // Find last node
    last = ft_lstlast(list);
    printf("Last node content: %s\n", (char *)last->content);
    
    // Free the list
    ft_lstclear(&list, NULL);
    return (0);
} */
