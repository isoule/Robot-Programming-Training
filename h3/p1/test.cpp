#include <iostream>
#include <vector>
#include <algorithm>
#include <typeinfo>
#include <string>

int main() { 
	std::vector<double> numbers;
	std::string input;
			
	while (true) { 
		std::cout << "Enter number: " << std::endl;
		std::getline(std::cin, input);
		if (input.length() == 0) {
                        break;
                }
		numbers.push_back(input);	
	} 
	
	return 0;
}
