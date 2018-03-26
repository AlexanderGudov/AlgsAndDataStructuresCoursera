//============================================================================
// Name        : SumOfTwoDigits.cpp
// Author      : Aleksey Kravchuk
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main() {
	int a{0};
	int b{0};

	std::cin >> a >> b;

	if(a < 0 || a > 9 || b < 0 || b > 9) {
		std::cout << "Constraints:  0 ≤ a, b ≤ 9." << std::endl;
		return -1;
	}
	std::cout << a+b << std::endl;
	return 0;
}
