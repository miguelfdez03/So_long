/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:52:51 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 23:32:46 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* int main(void)
{
    t_list *list = NULL;
    
    printf("\nTesting ft_lstsize:\n");
    printf("----------------\n");
    
    // Add three nodes
    ft_lstadd_front(&list, ft_lstnew("Third"));
    ft_lstadd_front(&list, ft_lstnew("Second"));
    ft_lstadd_front(&list, ft_lstnew("First"));
    
    printf("List size: %d\n", ft_lstsize(list));
    
    // Free the list
    ft_lstclear(&list, NULL);
    return (0);
} */
