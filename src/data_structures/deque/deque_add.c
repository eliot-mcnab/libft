/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emcnab <emcnab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:52:49 by emcnab            #+#    #+#             */
/*   Updated: 2023/01/10 11:49:47 by emcnab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/deque.h"

/**
 * @file deque_add.c
 *
 * @brief This file contains functions for adding elements to a deque
 * (double-ended queue).
 *
 * A deque is a dynamic array that allows insertions and deletions at both ends.
 * It has a front, a back, and a size.
 *
 * The functions are:
 * - ft_deque_add_front(): adds an element to the front of the deque.
 * - ft_deque_add_back(): adds an element to the back of the deque.
 *
 * @author Eliot McNab
 */

/**
 * @brief Adds an element to the front of the deque.
 *
 * @param deque A pointer to the deque.
 * @param n The element to be added.
 *
 * @return NO_ERROR if the element was successfully added, MALLOC_ERROR if an
 * error occurred.
 *
 * The function first checks if the deque needs to make space using the
 * ft_deque_should_make_space() function, and if it does, it calls the 
 * ft_deque_make_space() function to do so. If either function returns an
 * error, the function returns MALLOC_ERROR. Otherwise, it adds the element to
 * the front of the deque by incrementing the top index and storing the element
 * in the deque's data array at that index. It then increments the size of the
 * deque.
 */
int	ft_deque_add_front(t_s_deque *deque, int n)
{
	if (ft_deque_should_make_space(deque) && ft_deque_make_space(deque))
		return (MALLOC_ERROR);
	deque->data[++deque->top] = n;
	deque->size_actual++;
	return (NO_ERROR);
}

/**
 * @brief Adds an element to the back of the deque.
 *
 * @param deque A pointer to the deque.
 * @param n The element to be added.
 *
 * @return NO_ERROR if the element was successfully added, MALLOC_ERROR if an
 * error occurred.
 *
 * The function works in a similar way to ft_deque_add_front(), except that
 * it decrements the bottom index instead of incrementing the top index, and
 * adds the element to the back of the deque by storing it in the deque's data
 * array at that index.
 */
int	ft_deque_add_back(t_s_deque *deque, int n)
{
	if (ft_deque_should_make_space(deque) && ft_deque_make_space(deque))
		return (MALLOC_ERROR);
	deque->data[--deque->bottom] = n;
	deque->size_actual++;
	return (NO_ERROR);
}
