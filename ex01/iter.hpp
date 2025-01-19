/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:48:49 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/19 11:57:37 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void increment(T &x)
{
	x++;
}

template<typename T>
void print(T x)
{
	std::cout << x << std::endl;
}

template<typename T, typename F>
void iter(T *ptr, size_t len, F func)
{
	for (size_t i = 0; i < len; i++)
		func(ptr[i]);
}
