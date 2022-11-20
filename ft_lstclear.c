/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcnab <emcnab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:10:27 by emcnab            #+#    #+#             */
/*   Updated: 2022/11/18 17:50:27 by emcnab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief Frees up memory taken up by all elements in a linked list and sets 
 * 	the [head] to NULL.
 *
 * @param head (t_list **): the start of the linked list.
 * @param f_free_content (void(t_any)): function used to free the content of 
 * 	individual nodes in the linked list pointed to by [head].
 */
void	ft_lstclear(t_list **head, void (*f_free_content)(t_any))
{
	t_list	*node_current;
	t_list	*node_previous;

	if (!head || !*head || !f_free_content)
		return ;
	node_current = *head;
	while (node_current)
	{
		node_previous = node_current;
		node_current = node_current -> next;
		ft_lstdelone(node_previous, f_free_content);
	}
	*head = NULL;
}
