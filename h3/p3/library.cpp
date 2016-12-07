#include "library.h"

#include <string>
#include <vector>
#include <iostream>

//Add books
Library::AddBook() {
  std::cout << "Title of book: " << std::endl;
  std::string new_title;
  std::cin >> new_title;
  Book(new_title, true) new_book;
  library_.push_back(new_book);
}

//Add patrons
Library::AddMember() {
  std::cout << "Last name: " << std::endl;
  std::string last_name;
  std::cin >> last_name;
  //No current checked out books = NULL
  members_[last_name] = NULL;
}
