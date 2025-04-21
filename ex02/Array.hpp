/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 10:12:18 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/04/21 11:07:05 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

template <typename T>
class Array{
	private:
		T		*arr;
		size_t	arr_size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array &other);
		Array &operator=(Array &other);
		~Array();
		size_t	size(void) const;
		T	&operator[](int i);
		class	ArrayIsEmpty : public std::exception {
			public:
				const char	*what() const throw();
		};
		class	IndexNotValid : public std::exception {
			public:
				const char	*what() const throw();
		};
};

#include "Array.tpp"
