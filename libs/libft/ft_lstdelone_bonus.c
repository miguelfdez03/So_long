/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:32:23 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 23:18:12 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* void del_content(void *content)
{
    free(content);
}

int main(void)
{
    t_list *node;
    
    printf("\nTesting ft_lstdelone:\n");
    printf("-------------------\n");
    
    // Create a node with dynamic content
    node = ft_lstnew(strdup("Test Node"));
    printf("Node content: %s\n", (char *)node->content);
    
    // Delete the node
    printf("Deleting node...\n");
    ft_lstdelone(node, del_content);
    printf("Node deleted\n");
    
    return (0);
} */
