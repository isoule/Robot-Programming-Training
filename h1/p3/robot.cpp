#include <iostream> 
#include "robot.h"

void Robot::drive(int distance) {
	//Needed to limit robot movement to [0, 7]
	//Not sure how else to do it for this assignment
	if (robotPosition + distance >= 7) {
		robotPosition = 7;
	} else if (robotPosition + distance <= 0) {
		robotPosition = 0;
	} else {
		robotPosition += distance;
	}
}
void Robot::moveArmTo(int position) {
	//Limit arm to [0, 10]. See above comment.
	if (position >= 10) {
		armPosition = 10;
	} else if (position <= 0) {
		armPosition = 0;
	} else {
		armPosition = position;
	}
}
void Robot::scorePiece() {
	if (getArmPosition() == 10 && getPosition() == 6 && hasPiece()) {
		//Scores piece -> no longer has piece
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

//Prints robot status to console.
//Needed a way to check to make sure the functions worked.
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
