#ifndef nsrobot
#define nsrobot

namespace ion {

class Robot {

 public:
  void drive(int distance);
  void moveArmTo(int position);
  void scorePiece();
  void pickUpPiece();
  bool hasPiece() const;
  int getPosition() const;
  int getArmPosition() const;
  int getScore() const;

  void printStatus() const;

 private:
  int robotPosition = 0;
  int armPosition = 0;
  int score = 0;
  bool piece = false;
};

} // end namespace ion

#endif // nsrobot
