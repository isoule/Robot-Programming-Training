#include "robot.h"

class Robot {

	public:
		void drive(int distance) {
			robotPosition += distance;
		}
		void moveArmTo(int position) {
			armPosition = position;
		}
		void scorePiece() {
			if (getArmPosition() == 10) && 
			   (getPosition() == 6) && 
			   (hasPiece()) {
				score += 1;
				piece = false;
			}
		}
		void pickUpPiece() {
			if (getArmPosition() == 0) &&
		           (!hasPiece()) {
				hasPiece = true;
			}
		}
		bool hasPiece() {
			return piece;
		}
		int getPosition() {
			return robotPosition;
		}
		int getArmPosition() {
			return armPosition;
		}
		int getScore() {
			return score;
		}

	private:
		int robotPosition = 0;
		int armPosition 0;
		int score = 0;
		bool piece = false;
}
