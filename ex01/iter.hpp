/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: h4ns <h4ns@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:48:49 by timschmi          #+#    #+#             */
/*   Updated: 2025/04/19 14:30:55 by h4ns             ###   ########.fr       */
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

template<typename T>
void iter(T *ptr, size_t len, void(*func)(T &i))
{
	for (size_t i = 0; i < len; i++)
		func(ptr[i]);
}