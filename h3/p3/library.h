#ifndef LIBRARY_H_
#define LIBRARY_H_

#include <iostream>
#include <string>
#include <vector>

#include "book.h"
#include "date.h"
#include "patron.h"

class Library {
 public:
  //Need to keep track of all dem books
  std::vector<Book> library_;
  //Need to keep track of all dem patrons
  std::vector<Patron> patrons_;

  //Need to be able to:
  //Add books
  //Add patrons
  //Checkout/return books
  //See what is available
  //See who has checked out what
};

#endif  // LIBRARY_H_
