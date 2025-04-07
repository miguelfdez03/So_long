/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:44:37 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 23:12:43 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int main(void)
{
    t_list *list = NULL;
    t_list *current;
    
    printf("\nTesting ft_lstadd_front:\n");
    printf("---------------------\n");
    
    // Add nodes to front
    ft_lstadd_front(&list, ft_lstnew("Third"));
    ft_lstadd_front(&list, ft_lstnew("Second"));
    ft_lstadd_front(&list, ft_lstnew("First"));
    
    // Print list
    printf("List content: ");
    current = list;
    while (current)
    {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");
    
    // Free the list
    ft_lstclear(&list, NULL);
    return (0);
} */
