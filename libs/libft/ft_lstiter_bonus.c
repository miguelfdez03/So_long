/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:34:04 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 23:22:42 by miguel-f         ###   ########.fr       */
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

/* void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *list = NULL;
    
    printf("\nTesting ft_lstiter:\n");
    printf("-----------------\n");
    
    // Create two simple nodes
    ft_lstadd_back(&list, ft_lstnew(strdup("First")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Second")));
    
    // Print using lstiter
    ft_lstiter(list, print_content);
    
    // Free the list
    ft_lstclear(&list, free);
    return (0);
} */
