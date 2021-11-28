/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:51:34 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/28 19:53:45 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP

#define WHATEVER_HPP

template <typename T>
const T &min(T const &a, T const &b)
{
	return (a < b) ? a : b;
}

template <typename T>
const T &max(T const &a, T const &b)
{
	return (a > b) ? a : b;
}

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

#endif