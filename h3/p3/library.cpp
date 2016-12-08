#include "library.h"
#include "patron.h"
#include "book.h"

#include <string>
#include <vector>
#include <iostream>
#include <map>

//Add books
void Library::AddBook() {
  std::cout << "Title of book: " << std::endl;
  std::string new_title;
  std::cin >> new_title;
  Book new_book(new_title, true);
  library_.insert(std::make_pair(new_title, new_book));
}

//Add patrons
void Library::AddMember() {
  std::cout << "Last name: " << std::endl;
  std::string last_name;
  std::cin >> last_name;
  members_[last_name] = Patron{};
}

  //Checkout books
  void Library::CheckOutBook() {
  //Which patron
  std::cout << "Name: " << std::endl;
  std::string patron_name;
  std::cin >> patron_name;
  //User inputs the title to find
  std::cout << "Which title: " << std::endl;
  std::string find_title;
  std::cin >> find_title;
  //Find Book w/ title in library_
  auto found_book = library_.find(find_title);
  //Change Book.checked_in_ to false
  found_book->second.ChangeBookStatus();
  //Add title and book to Patron
  members_[patron_name].patron_books_.push_back(found_book->second); //Not working
  //BEGIN WORKING HERE!!!
  //Need to figure out the nesting of Book within Patron within Library
  //BEGIN WORKING HERE!!!

} 
