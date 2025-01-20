/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 12:06:41 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/20 10:11:40 by timschmi         ###   ########.fr       */
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
	Array(): arr(new T[0]()), len(0) {}; // should it be [0] or [1]?
	Array(unsigned int n);
	Array(const Array &other);
  //Destructor
	~Array() {std::cout << "Array destructor called" << std::endl; delete[] arr;};
  //Overload
	Array& operator=(const Array &other);
	T& operator[](unsigned int i);
  //Getter
	size_t size(void) const;
};

#include "Array.tpp"
