/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcnab <emcnab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:01:58 by emcnab            #+#    #+#             */
/*   Updated: 2022/11/20 17:57:40 by emcnab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#define SPACE_START '\t'
#define SPACE_END '\r'

/*
 * @brief Determines if a character is a space as defined by isspace(3)'
 *
 * @param c (int): character to check.
 * 
 * @return (int): true if [c] is a space, 0 otherwise.
 */
int	ft_isspace(int c)
{
	c = ft_tochar(c);
	return ((c >= SPACE_START && c <= SPACE_END) || c == ' ');
}