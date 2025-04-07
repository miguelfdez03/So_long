/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:34:33 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 23:28:30 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	void	*content;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_elem = ft_lstnew(content);
		if (!new_elem)
		{
			if (del)
				del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}

/* void *to_upper(void *content)
{
    char *str = strdup((char *)content);
    int i = 0;
    
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return str;
}

int main(void)
{
    t_list *list = NULL;
    t_list *mapped;
    t_list *current;
    
    printf("\nTesting ft_lstmap:\n");
    printf("----------------\n");
    
    // Create original list
    ft_lstadd_back(&list, ft_lstnew(strdup("hello")));
    ft_lstadd_back(&list, ft_lstnew(strdup("world")));
    
    // Map list to uppercase
    mapped = ft_lstmap(list, to_upper, free);
    
    // Print new list
    current = mapped;
    while (current)
    {
        printf("%s ", (char *)current->content);
        current = current->next;
    }
    printf("\n");
    
    // Free both lists
    ft_lstclear(&list, free);
    ft_lstclear(&mapped, free);
    return (0);
} */
