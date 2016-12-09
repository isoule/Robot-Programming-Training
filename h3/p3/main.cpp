#include "book.h"
#include "library.h"
#include "patron.h"

#include <iostream>
#include <string>

int main() {

  // Build Library
  Library Ion;

  // Get user input
  // With all of the options in library.h

  while (true) {
    std::cout << "1. Add book" << std::endl;
    std::cout << "2. Add patron" << std::endl;
    std::cout << "3. Get book" << std::endl;
    std::cout << "4. Return book" << std::endl;
    std::cout << "5. Print status" << std::endl;
    std::cout << "6. Exit" << std::endl;
    std::cout << "Enter task #: " << std::endl;
    int u_i;
    std::getline(std::cin, u_i);

    if (u_i == 1) {
      Ion.AddBook();
    } else if (u_i == 2) {
      Ion.AddMember();
    } else if (u_i == 3) {
      Ion.CheckOutBook();
    } else if (u_i == 4) {
      Ion.ReturnBook();
    } else if (u_i == 5) {
      Ion.print_status(); 
    } else if (u_i == 6) {
      break;
    }
  }
  return 0;
}
