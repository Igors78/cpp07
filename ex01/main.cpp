/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:11:55 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/28 20:55:08 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main()
{
	{
		int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

		std::cout << "Before: ";
		iter(arr, 10, putout);
		iter(arr, 10, plus);
		std::cout << std::endl
				  << "After: ";
		iter(arr, 10, putout);
		std::cout << std::endl;
	}

	{
		double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.99};

		std::cout << "Before: ";
		iter(arr, 10, putout);
		iter(arr, 10, plus);
		std::cout << std::endl
				  << "After: ";
		iter(arr, 10, putout);
		std::cout << std::endl;
	}
	return 0;
}