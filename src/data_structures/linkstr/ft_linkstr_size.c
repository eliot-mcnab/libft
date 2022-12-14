/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkstr_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcnab <emcnab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:19:59 by emcnab            #+#    #+#             */
/*   Updated: 2023/01/11 10:28:45 by emcnab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/linkstr.h"

/*
 * @brief Determines the total size of a linked string by summing the individual
 * 	size of each string it contains.
 *
 * @param linkstr (t_s_linkstr *): the linked strings to determine the total size
 * 	of.
 *
 * @return (size_t): the total size of [linkstr].
 */
size_t	ft_linkstr_size(t_s_linkstr *linkstr)
{
	t_s_list	*node_current;
	char	**strs;
	size_t	size;
	size_t	i;

	node_current = linkstr->strs_first;
	size = 0;
	i = 0;
	while (i < linkstr->i)
	{
		if (i && i % linkstr->linksize == 0)
			node_current = node_current->next;
		strs = (char **)node_current->content;
		size += ft_strlen(strs[i % linkstr->linksize]);
		i++;
	}
	return (size);
}
