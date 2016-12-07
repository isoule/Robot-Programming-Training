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
  //Need to be able to:
  //Add books
  void AddBook(); 
  //Add patrons
  void AddMember(); 
  //Checkout books
  void CheckOutBook();
  //Return books
  void ReturnBook();
  //See what is available
  //See who has checked out what
 private:
  //Need to keep track of books <title, Book>
  std::map<std::string, Book> library_;
  //Need to keep track of patrons <name, Patron> 
  std::map<std::string, Patron> members_;
};

#endif  // LIBRARY_H_
