/*
 * MaximumPariwiseProduct_2.cpp
 *
 *  Created on: Mar 26, 2018
 *      Author: Aleksey Kravchuk
 */

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

uint64_t MaxPairwiseProduct(const std::vector<uint32_t>& numbers) {
//	if(numbers.size() == 2) {
//		return static_cast<uint64_t>(numbers[0]) * numbers[1];
//	}

	uint32_t max1{0};
	uint32_t max1Index{0};
	uint32_t max2{0};

	for(uint32_t  i = 0; i < numbers.size(); i++) {
		if(numbers[i] > max1) {
			max1 = numbers[i];
			max1Index = i;
		}
	}

	for(uint32_t  i = 0; i < numbers.size(); i++) {
		if(i != max1Index) {
			max2 = std::max(max2, numbers[i]);
		}
	}

	return static_cast<uint64_t>(max1) * max2;
}


int main() {
	uint32_t n; // the number of non-negative integers in a sequence (vector)
	std::cin >> n;
	if( n < 2 || n > 200000) {
		std::cout << "Entered number doesn't fit the constraints." << std::endl;
	}

	std::vector<uint32_t> numbers(n, 0);

	for(uint32_t i = 0; i < n; i++) {
		std::cin >> numbers[i];
		if(numbers[i] > 200000) {
			std::cout << "Entered number doesn't fit the constraints." << std::endl;
			break;
		}
	}

	std::cout << MaxPairwiseProduct(numbers);


	return 0;
}


