#include "library.h"
#include "book.h"
#include "patron.h"

#include <iostream>
#include <map>
#include <string>
#include <vector>

// Add books
void Library::AddBook() {
  std::cout << "Title of book: " << std::endl;
  std::string new_title;
  std::cin >> new_title;
  Book new_book(new_title, true);
  library_.insert(std::make_pair(new_title, new_book));
}

// Add patrons
void Library::AddMember() {
  std::cout << "Last name: " << std::endl;
  std::string last_name;
  std::cin >> last_name;
  members_[last_name] = Patron{};
}

// Checkout books
void Library::CheckOutBook() {
  // Which patron?
  std::cout << "Name: " << std::endl;
  std::string patron_name;
  std::cin >>  patron_name;
  // User inputs the title to find
  std::cout << "Which title: " << std::endl;
  std::string find_title;
  std::cin >> find_title;
  // Find Book w/ title in library_
  auto found_book = library_.find(find_title);
  // Change Book.checked_in_ to false
  found_book->second.ChangeBookStatus();
  // Add title and book to Patron
  members_[patron_name].AddPatronBook(found_book->second);
}

//Return books
void Library::ReturnBook() {
  std::cout << "Name: " << std::endl;
  std::string patron_name;
  std::cin >> patron_name;
  std::cout << "Which title do you want to return: " << std::endl;
  std::string return_title;
  std::cin >> return_title;
  auto returned_book = library_.find(return_title);
  returned_book->second.ChangeBookStatus();
  //Remove book from Patron.patron_books_
  members_[patron_name].RemovePatronBook(returned_book->second);
}

//Get status
void Library::print_status() const {
  std::cout << "Books in library:" << std::endl;
  for (const auto& library_pair : library_) {
    std::cout << " -" << library_pair.first << ", ";
    if (library_pair.second.get_checked_status() == true) {
      std::cout << "available" << std::endl;
    } else {
      std::cout << "unavailable" << std::endl;
    }
  }
}
