/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 10:49:10 by mel-bouh          #+#    #+#             */
/*   Updated: 2025/04/21 11:09:04 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	try {
		// Test 1: Create empty array
		Array<int> emptyArray;
		std::cout << "Empty array size: " << emptyArray.size() << std::endl;

		// Test 2: Create array with size 5
		Array<int> numbers(5);
		for (int i = 0; i < 5; ++i) {
			numbers[i] = i * 10;
		}

		std::cout << "Numbers array: ";
		for (int i = 0; i < 5; ++i) {
			std::cout << numbers[i] << " ";
		}
		std::cout << std::endl;

		// Test 3: Deep copy (copy constructor)
		Array<int> copy(numbers);
		copy[0] = 999; // Change copy to verify deep copy

		std::cout << "Original after copy modified: ";
		for (int i = 0; i < 5; ++i) {
			std::cout << numbers[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "Copy array after modification: ";
		for (int i = 0; i < 5; ++i) {
			std::cout << copy[i] << " ";
		}
		std::cout << std::endl;

		// Test 4: Assignment operator
		Array<int> assigned;
		assigned = numbers;
		assigned[1] = 777;

		std::cout << "Original after assignment modified: ";
		for (int i = 0; i < 5; ++i) {
			std::cout << numbers[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "Assigned array after modification: ";
		for (int i = 0; i < 5; ++i) {
			std::cout << assigned[i] << " ";
		}
		std::cout << std::endl;

		// Test 5: Index out of range
		try {
			std::cout << numbers[10] << std::endl;
		} catch (const std::exception& e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}

		// Test 6: Access empty array
		try {
			std::cout << emptyArray[0] << std::endl;
		} catch (const std::exception& e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}

		Array<std::string> words(3);
		words[0] = "Hello";
		words[1] = "World";
		words[2] = "!";
		std::cout << "Words array: ";
		for (size_t i = 0; i < words.size(); ++i) {
			std::cout << words[i] << " ";
		}
		std::cout << std::endl;

	} catch (const std::exception& e) {
		std::cout << "Fatal error: " << e.what() << std::endl;
	}
	return 0;
}
