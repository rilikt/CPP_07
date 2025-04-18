/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 12:06:41 by timschmi          #+#    #+#             */
/*   Updated: 2025/04/18 17:32:45 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
  private:
	T *arr;
	size_t len;

	class rangeException: public std::exception
	{
		const char* what() const  noexcept override;
	};

  public:
  //Constructors
	Array(); // should it be [0] or [1]?
	Array(unsigned int n);
	Array(const Array &other);
  //Destructor
	~Array();
  //Overload
	Array& operator=(const Array &other);
	T& operator[](unsigned int i);
  //Getter
	size_t size(void) const;
};

#include "Array.tpp"
