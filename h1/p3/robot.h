#ifndef robot
#define robot

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
		
		void getStatus();

	private:
		int robotPosition;
		int armPosition;
		int score;
	       	bool piece;
		
};

#endif
