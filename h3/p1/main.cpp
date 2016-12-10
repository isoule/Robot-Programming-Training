#include <algorithm>
#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>

int main() {

  std::vector<double> numbers;
  std::string input;

  while (true) {
    std::cout << "Enter number: " << std::endl;
    std::getline(std::cin, input);
    if (input.length() == 0) {
      break;
    }
    double num = std::stod(input);
    numbers.push_back(num);
  }

  std::sort(std::begin(numbers), std::end(numbers));

  for (auto i = std::begin(numbers); i != std::end(numbers); i++) {
    std::cout << *i << std::endl;
  }

  return 0;
}
