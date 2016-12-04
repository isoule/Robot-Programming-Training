#include "nsrobot.h"
#include <iostream>

int main() {

  // Just created a random robot "Bobby"
  // that does random stuff to test the functions
  // Don't know how to otherwise test the class
  ion::Robot Bobby;
  Bobby.drive(3);
  Bobby.moveArmTo(3);
  Bobby.pickUpPiece();
  Bobby.printStatus();

  Bobby.moveArmTo(0);
  Bobby.pickUpPiece();
  Bobby.printStatus();

  Bobby.drive(3);
  Bobby.moveArmTo(10);
  Bobby.scorePiece();
  Bobby.printStatus();

  return 0;
}
