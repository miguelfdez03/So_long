/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:59:21 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 22:58:20 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/* int main(void)
{
    t_list *list = NULL;
    t_list *current;
    
    printf("\nTesting ft_lstadd_back:\n");
    printf("--------------------\n");
    
    // Add three nodes to the list
    ft_lstadd_back(&list, ft_lstnew("First"));
    ft_lstadd_back(&list, ft_lstnew("Second"));
    ft_lstadd_back(&list, ft_lstnew("Third"));
    
    // Print the list
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
