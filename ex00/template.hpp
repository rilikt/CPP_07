/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: h4ns <h4ns@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:35:11 by timschmi          #+#    #+#             */
/*   Updated: 2025/04/19 14:29:50 by h4ns             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

//Template functions

template<typename T> 
void swap(T &a, T &b)
{
	T temp;
	temp = a;

	a = b;
	b = temp;
}

template<typename T>
T& min(T &a, T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T& max(T &a, T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
