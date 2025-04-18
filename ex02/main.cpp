/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 12:06:26 by timschmi          #+#    #+#             */
/*   Updated: 2025/04/18 17:34:09 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//what exactly is an empty array

int main()
{	
	Array<int> arr(10);
	Array<int> two;

	std::cout << "Size of arr: " << arr.size() << std::endl;
	std::cout << "Size of two: " << two.size() << std::endl;
	
	//Exception tesing
	try
	{
		arr[0] = 110;
		std::cout << arr[0] << std::endl; 
		std::cout << two[0] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	//Assignment operator
	two = arr;
	std::cout << two[0] << std::endl;
	std::cout << two.size() << std::endl;

	return (0);
}
