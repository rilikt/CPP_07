/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:48:49 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/18 14:17:55 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void increment(T &x)
{
	x++;
}

template<typename T, typename F>
void iter(T ptr, int len, F func)
{
	for (int i = 0; i < len; i++)
		func(ptr[i]);
}
