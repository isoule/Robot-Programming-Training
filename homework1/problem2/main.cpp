#include <iostream>
#include "math.h"

int main() {
	std::cout << "Enter a #" << std::endl;
	double num;
	std::cin >> num;
	double abs;
	abs = absolute(num);
	std::cout << "abs(" << num << ") = " << abs << std::endl;
	return 0;
}
