/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:53:24 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/04/21 10:03:19 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T, typename F>
void	iter(T *arr, size_t	size, F func) {
	for (int i = 0;i < size;i++)
		func(arr[i]);
}

template<typename T>
void printElement(const T& elem) {
	std::cout << elem << std::endl;
}
