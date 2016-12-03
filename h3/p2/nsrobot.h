#ifndef robot
#define robot

namespace ion {

class Robot {

	public:
		void drive(int distance);
		void moveArmTo(int position);
		void scorePiece();
		void pickUpPiece();
		bool hasPiece();
		int getPosition();
		int getArmPosition();
		int getScore();
		
		void printStatus();

	private:
		int robotPosition = 0;
		int armPosition = 0;
		int score = 0;
	       	bool piece = false;
		
};

} //end namespace ion

#endif
