/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 10:19:21 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/04/21 11:08:09 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : arr(new T[0]), arr_size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]), arr_size(n) {}

template <typename T>
Array<T>::Array(Array<T> &other) {
	if (this != &other) {
		arr = new T[other.arr_size];
		for (int i = 0;i < other.arr_size;i++)
			this->arr[i] = other.arr[i];
		this->arr_size = other.arr_size;
	}
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &other) {
	if (this != &other) {
		delete[] this->arr;
		arr = new T[other.arr_size];
		for (int i = 0;i < other.arr_size;i++)
			arr[i] = other.arr[i];
		arr_size = other.arr_size;
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] arr;
}

template <typename T>
const char	*Array<T>::ArrayIsEmpty::what() const throw() {
	return "Array is empty";
}

template <typename T>
const char	*Array<T>::IndexNotValid::what() const throw() {
	return "Index out of range";
}

template <typename T>
T	&Array<T>::operator[](int	i) {
	if (arr_size == 0)
		throw ArrayIsEmpty();
	if (i < 0 || i >= arr_size)
		throw IndexNotValid();
	return arr[i];
}

template <typename T>
size_t	Array<T>::size(void) const {
	return (arr_size);
}
