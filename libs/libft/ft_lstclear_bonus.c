/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:33:13 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 23:15:22 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/* void del_content(void *content)
{
    free(content);
}

int main(void)
{
    t_list *list = NULL;
    t_list *current;
    
    printf("\nTesting ft_lstclear:\n");
    printf("-----------------\n");
    
    // Create a list with 3 nodes
    ft_lstadd_front(&list, ft_lstnew(strdup("Third")));
    ft_lstadd_front(&list, ft_lstnew(strdup("Second")));
    ft_lstadd_front(&list, ft_lstnew(strdup("First")));
    
    // Print original list
    printf("Original list: ");
    current = list;
    while (current)
    {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");
    
    // Clear the list
    ft_lstclear(&list, del_content);
    printf("After clear: ");
    if (list == NULL)
        printf("List is empty\n");
    else
        printf("List still has nodes\n");
    
    return (0);
} */
