/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkstr_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcnab <emcnab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:18:41 by emcnab            #+#    #+#             */
/*   Updated: 2022/11/29 14:40:41 by emcnab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/*
 * @brief Adds a new string at the end of a a linked string.
 *
 * @param linkstr (t_linkstr *): the linked string to append [str] to.
 * @param str (char *): the string to append to [linkstr].
 */
void	ft_linkstr_add(t_lstr *linkstr, char *str)
{
	char	**strs;
	char	**strs_new;

	if (!linkstr | !str)
		return ;
	if (linkstr->i && linkstr->i % linkstr->linksize == 0)
	{
		strs_new = malloc(linkstr->linksize * sizeof(*strs_new));
		linkstr->strs_last->next = ft_lst_new(strs_new);
		linkstr->strs_last = linkstr->strs_last->next;
	}
	strs = (char **)linkstr->strs_last->content;
	strs[linkstr->i % linkstr->linksize] = str;
	linkstr->i++;
}
