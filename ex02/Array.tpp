/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 12:50:20 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/19 14:42:53 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//Constructor
template<typename T>
Array<T>::Array(unsigned int n) : len(n)
{
	arr = new T[n]();
}

template<typename T>
Array<T>::Array(const Array &other): len(other.len)
{
	this->arr = new T[this->len]();

	for (size_t i = 0; i < this->len; i++)
		this->arr[i] = other.arr[i];
}

//Overload
template<typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i >= this->len)
		throw rangeException();
	return this->arr[i];
}

template<typename T>
Array<T>& Array<T>::operator=(const Array &other)
{
	if (this == &other)
		return *this;

	delete[] arr;
	arr = new T[other.len]();
	this->len = other.len;

	for (size_t i = 0; i < this->len; i++)
		this->arr[i] = other.arr[i];

	return *this;
}

//Exception
template<typename T>
const char* Array<T>::rangeException::what() const noexcept
{
	return ("Index out of bounds");
}

//Getter
template<typename T>
size_t Array<T>::size() const
{
	return this->len;
}
