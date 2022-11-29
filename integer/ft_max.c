/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcnab <emcnab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:24:36 by emcnab            #+#    #+#             */
/*   Updated: 2022/11/29 11:31:22 by emcnab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
 * @brief determines the largerst of two number
 *
 * @param a (size_t): the first number
 * @param b (size_t): the second number
 *
 * @return (size_t): the largest number between a and b
 */
size_t	ft_max(size_t a, size_t b)
{
	if (a >= b)
		return (a);
	return (b);
}
