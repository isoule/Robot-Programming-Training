#include <iostream>
#include <vector>
#include <typeinfo>
#include <string>
#include <algorithm>

int main() {
	std::vector<double> numbers;
	std::string strInput;
	
	while (true) {
		std::cout << "Please enter a number:" << std::endl;
		std::cin >> strInput;
	
		if (strInput == NULL) {
			break;
		} else {
			double input = std::stod(strInput);
			numbers.push_back(input);
		}
	}

/*
	std::sort(std::begin(numbers), std::end(numbers));

	for (auto i = std::begin(numbers); i != std::end(numbers); i++) {
		std::cout << *i << std::endl;
	}
*/

	return 0;
}
