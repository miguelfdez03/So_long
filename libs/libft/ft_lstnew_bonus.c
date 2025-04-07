/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:22:50 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 23:30:59 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* int main(void)
{
    t_list *node;
    
    printf("\nTesting ft_lstnew:\n");
    printf("----------------\n");
    
    // Create a new node with string content
    node = ft_lstnew("Test Content");
    
    printf("Node content: %s\n", (char *)node->content);
    printf("Next pointer: %p\n", node->next);
    
    free(node);
    return (0);
} */
