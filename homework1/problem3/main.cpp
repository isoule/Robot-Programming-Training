#include <iostream>
#include "robot.h"

int main() {
	
	Robot Bobby = Robot();
	Bobby.drive(3);
	std::cout << "Position: " << Bobby.getPosition() << std::endl;
	return 0;
}
