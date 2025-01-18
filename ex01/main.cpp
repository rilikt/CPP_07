/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:23:19 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/18 14:25:11 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void int_increment(int &i)
{
	i++;
}

int main()
{
	int a[] = {0, 1, 2, 3, 4};
	int size = sizeof(a) / sizeof(int);

	for (int i = 0; i < size; i++)
		std::cout << a[i] << std::endl;

	std::cout << "---" << std::endl;

	::iter(a, 5, increment<int>);

	for (int i: a)
		std::cout << i << std::endl;
	
	std::cout << "---" << std::endl;

	::iter(a, 5, int_increment);

	for (int i: a)
		std::cout << i << std::endl;
	
	return (0);
}