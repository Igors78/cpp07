/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 21:33:10 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/28 21:56:02 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
public:
	/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
	Array()
	{
		this->_array = NULL;
		this->_size = 0;
	}
	Array(unsigned int n)
	{
		this->_array = new T[n];
		this->_size = n;
	}
	Array(Array const &src)
	{
		this->_array = NULL;
		this->_size = 0;
		*this = src;
	}

	/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

	~Array(void)
	{
		if (this->_array)
			delete[] this->_array;
	}

	/*
** --------------------------------- OVERLOAD ---------------------------------
*/

	Array &operator=(Array const &rhs)
	{
		if (this->_array)
			delete[] this->_array;
		this->_array = new T[rhs.size()];
		this->_size = rhs.size();
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = rhs.getArray()[i];
		return *this;
	}
	T &operator[](unsigned int i)
	{
		if (i >= this->_size)
			throw std::exception();
		return this->_array[i];
	}
	T const &operator[](unsigned int i) const
	{
		if (i >= this->_size)
			throw std::exception();
		return this->_array[i];
	}
	/*
** --------------------------------- ACCESSOR ---------------------------------
*/
	unsigned int size() const
	{
		return this->_size;
	}
	T *getArray() const
	{
		return this->_array;
	}

	/*
** --------------------------------- PRIVATE -----------------------------------
*/
private:
	T *_array;
	unsigned int _size;
};

#endif
/* ************************************************************************** */