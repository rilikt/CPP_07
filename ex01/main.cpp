/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:23:19 by timschmi          #+#    #+#             */
/*   Updated: 2025/04/18 17:40:32 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void int_increment(int &i)
{
	i++;
}

int main()
{
	int arr[] = {0, 1, 2, 3, 4};
	char str[] = "abc";
	size_t arr_size = sizeof(arr) / sizeof(int);
	size_t str_size = sizeof(str) / sizeof(char) - 1;

	//Printing using iter and print template funciton
	std::cout << "Char arr before:" << std::endl;
	::iter(str, str_size, print<char>);

	//inter funciton call with template function
	::iter(str, str_size, increment<char>);

	//Printing
	std::cout << "Char arr after:" << std::endl;
	::iter(str, str_size, print<char>);
	std::cout << "Int arr before:" << std::endl;
	::iter(arr, arr_size, print<int>);

	//inter funciton call with regular function
	::iter(arr, arr_size, int_increment);

	//Printing
	std::cout << "Int arr after:" << std::endl;
	::iter(arr, arr_size, print<int>);
	
	return (0);
}
