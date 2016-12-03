#include <iostream> 
#include "nsrobot.h"

void ion::Robot::drive(int distance) {
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
void ion::Robot::moveArmTo(int position) {
	//Limit arm to [0, 10]. See above comment.
	if (position >= 10) {
		armPosition = 10;
	} else if (position <= 0) {
		armPosition = 0;
	} else {
		armPosition = position;
	}
}
void ion::Robot::scorePiece() {
	if (getArmPosition() == 10 && getPosition() == 6 && hasPiece()) {
		//Scores piece -> no longer has piece
		score += 1;
		piece = false;
	}
}
void ion::Robot::pickUpPiece() {
	if (getArmPosition() == 0 && !hasPiece()) {
		piece = true;
	}
}
bool ion::Robot::hasPiece() {
	return piece;
}
int ion::Robot::getPosition() {
	return robotPosition;
}
int ion::Robot::getArmPosition() {
	return armPosition;
}
int ion::Robot::getScore() {
	return score;
}

//Prints robot status to console.
//Needed a way to check to make sure the functions worked.
void ion::Robot::printStatus() {
	std::cout << "Postion: " << robotPosition << std::endl;
	std::cout << "Arm position: " << armPosition << std::endl;
	std::cout << "Has piece: " << piece << std::endl;
	std::cout << "Score: " << score << std::endl;
}
