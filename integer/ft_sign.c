/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcnab <emcnab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:02:54 by emcnab            #+#    #+#             */
/*   Updated: 2022/11/20 18:02:21 by emcnab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
 * @brief Determines the sign of an integer.
 *
 * @param n (int): the integer to determine the sign of.
 *
 * @return (int): -1 if n < 0, 0 if n == 0, 1 if n > 0.
 */
int	ft_sign(int n)
{
	return ((n > 0) - (n < 0));
}