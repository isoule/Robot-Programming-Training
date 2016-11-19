#include <iostream> 
#include "robot.h"

void Robot::drive(int distance) {
	robotPosition += distance;
}
void Robot::moveArmTo(int position) {
	armPosition = position;
}
void Robot::scorePiece() {
	if (getArmPosition() == 10 && getPosition() == 6 &&  hasPiece()) {
		score += 1;
		piece = false;
	}
}
void Robot::pickUpPiece() {
	if (getArmPosition() == 0 && !hasPiece()) {
		piece = true;
	}
}
bool Robot::hasPiece() {
	return piece;
}
int Robot::getPosition() {
	return robotPosition;
}
int Robot::getArmPosition() {
	return armPosition;
}
int Robot::getScore() {
	return score;
}

void Robot::getStatus() {
	std::cout << "Postion: " << robotPosition << std::endl;
	std::cout << "Arm position: " << armPosition << std::endl;
	std::cout << "Has piece: " << piece << std::endl;
	std::cout << "Score: " << score << std::endl;
}

int robotPosition = 0;
int armPosition =  0;
int score = 0;
bool piece = false;
