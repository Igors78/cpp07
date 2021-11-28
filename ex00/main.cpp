/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:50:34 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/28 20:07:45 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main(void)
{

	{
		int i = max(4, 8);
		std::cout << i << std::endl;

		double d = max(7.56, 21.434);
		std::cout << d << std::endl;

		char ch = max('b', '9');
		std::cout << ch << std::endl;
		std::cout << "======================================" << std::endl;
	}

	{
		int a = 0;
		int b = 5;
		double c = 0.0;
		double d = 5.5;

		std::cout << "max(a, b) = " << max(a, b) << std::endl;
		std::cout << "max(c, d) = " << max(c, d) << std::endl;
		std::cout << "before swap:" << std::endl;
		std::cout << "a = " << a << " b = " << b << std::endl;
		swap(a, b);
		std::cout << "after swap:" << std::endl;
		std::cout << "a = " << a << " b = " << b << std::endl;
		std::cout << "======================================" << std::endl;
	}

	{
		int a = 2;
		int b = 3;
		std::cout << "before swap:" << std::endl;
		std::cout << "a = " << a << " b = " << b << std::endl;
		::swap(a, b);
		std::cout << "after swap:" << std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "STR1";
		std::string d = "STR2";
		std::cout << "before swap:" << std::endl;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap(c, d);
		std::cout << "after swap:" << std::endl;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	return 0;
}