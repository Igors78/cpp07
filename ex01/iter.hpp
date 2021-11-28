/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:12:11 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/28 20:53:50 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

#include <iostream>

#define ITER_HPP

template <typename T>
void iter(T *arr, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}

template <typename T>
void putout(T &x)
{
	std::cout << x << " ";
	return;
}

template <typename T>
void plus(T &x)
{
	x++;
}

#endif