/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcnab <emcnab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:56:29 by emcnab            #+#    #+#             */
/*   Updated: 2023/01/11 17:02:25 by emcnab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memset.h"

#include <stddef.h>
#include <stdint.h>

/*
 * @brief fills memory with a constant byte
 *
 * @param memory (void *): the area in memory to set
 * @param byte (int): byte value to set the memory to
 * @param n: amount of bytes to set in memory
 *
 * return (void *): pointer to the area in memory which was set
 */
void	*ft_memset(void *memory, int byte, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((int8_t *)memory)[i] = byte;
		i++;
	}
	return (memory);
}
