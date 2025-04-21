/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 10:00:27 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/04/21 10:03:15 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(const int& x) {
	std::cout << x << std::endl;
}

int main() {
	// Array of ints
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Printing int array:" << std::endl;
	iter(intArray, intArraySize, printInt);

	// Array of chars
	char charArray[] = {'a', 'b', 'c', 'd'};
	size_t charArraySize = sizeof(charArray) / sizeof(charArray[0]);

	std::cout << "\nPrinting char array:" << std::endl;
	iter(charArray, charArraySize, printElement<char>);

	// Array of doubles
	double doubleArray[] = {1.1, 2.2, 3.3};
	size_t doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);

	std::cout << "\nPrinting double array:" << std::endl;
	iter(doubleArray, doubleArraySize, printElement<double>);

	return 0;
}
