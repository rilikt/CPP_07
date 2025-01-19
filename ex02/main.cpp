/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 12:06:26 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/19 14:32:36 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	// std::string str = "test";
	// for (char &c : str)
	// 	std::cout << c << std::endl;
	// int ptr[] = {1, 2, 3, 4};
	// for (int &i: ptr)
	// 	std::cout << i << std::endl;
	
	Array<int> arr(10);

	try
	{
		arr[0] = 10;
		std::cout << arr[0] << std::endl; 
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	Array<int> two(5);

	two = arr;

	std::cout << two[0] << std::endl;

}