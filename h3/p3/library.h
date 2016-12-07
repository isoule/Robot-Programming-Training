#ifndef LIBRARY_H_
#define LIBRARY_H_

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "book.h"
#include "patron.h"

class Library {
 public:
  //Need to keep track of all dem books
  std::vector<Book> library_;
  //Need to keep track of all dem patrons
  std::map<std::string, Patron> members_;

  //Need to be able to:

  //Add books
  void AddBook(); 

  //Add patrons
  void AddMember(); 
  //Checkout/return books
  //See what is available
  //See who has checked out what
};

#endif  // LIBRARY_H_
