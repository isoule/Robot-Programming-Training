#include <iostream>

int main() {
	std::cout << "What is your name?" << std::endl;
	std::string name;
	std::cin >> name;
	std::cout << "Hi, " << name << "! How old are you?" << std::endl;	
	int age;
	std::cin >> age;
	
	if (age < 21) {
		std::cout << "You are too young to smoke or drink." << std::endl;
	}
	else {
		std::cout << "You're old!" << std::endl;
	}
	return 0;
}
